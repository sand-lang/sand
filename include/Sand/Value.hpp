#pragma once

#include <Sand/Name.hpp>
#include <Sand/Type.hpp>

namespace Sand
{
class Value : public Name
{
public:
    Type *type = nullptr;
    llvm::Value *ref = nullptr;

    Value *calling_variable = nullptr;

    bool is_variadic = false;
    bool is_alloca = false;
    bool is_temporary = false;

    Value(const std::string &name, Type *type_, llvm::Value *ref_, const bool &is_alloca_ = false) : Name(name), type(type_), ref(ref_), is_alloca(is_alloca_)
    {
    }

    Value(const std::string &name, const bool &is_variadic_) : Name(name), is_variadic(is_variadic_) {}

    virtual llvm::Value *get_ref() const
    {
        return this->ref;
    }

    std::string to_string() const
    {
        std::string str;
        llvm::raw_string_ostream stream(str);
        this->ref->print(stream);

        return stream.str();
    }

    bool is_allocated_variable()
    {
        auto ref = this->get_ref();
        return !!llvm::isa<llvm::AllocaInst>(ref) || !!llvm::isa<llvm::GlobalVariable>(ref);
    }

    Value *call(llvm::IRBuilder<> &builder, std::unique_ptr<llvm::Module> &module, std::vector<Value *> args = {});

    void store(Value *value, llvm::IRBuilder<> &builder, std::unique_ptr<llvm::Module> &module, const bool &overwrite_reference = false)
    {
        auto lvalue = this;
        auto lvalue_type = lvalue->type;

        if (lvalue->is_alloca && lvalue_type->is_reference && !overwrite_reference)
        {
            lvalue = lvalue->load_reference(builder);
        }

        if (this->type->is_struct() && value->type->is_struct())
        {
            auto i8ptr = Type::pointer(Type::i8(builder.getContext()));

            auto rvalue = value->cast(i8ptr, builder, module, false);
            lvalue = lvalue->cast(i8ptr, builder, module, false);

            auto size = llvm::ConstantInt::get(llvm::Type::getInt64Ty(builder.getContext()), Type::get_origin(lvalue->type)->size(module));

            builder.CreateMemCpy(lvalue->get_ref(), llvm::Align(1), rvalue->get_ref(), llvm::Align(1), llvm::cast<llvm::Value>(size));
        }
        else if (this->type->is_array() && value->type->is_array())
        {
            auto i8ptr = Type::pointer(Type::i8(builder.getContext()));

            auto rvalue = value->cast(i8ptr, builder, module, false);
            lvalue = lvalue->cast(i8ptr, builder, module, false);

            auto size = llvm::ConstantInt::get(llvm::Type::getInt64Ty(builder.getContext()), Type::get_origin(lvalue->type)->size(module));

            builder.CreateMemCpy(lvalue->get_ref(), this->get_ref()->getPointerAlignment(module->getDataLayout()), rvalue->get_ref(), value->get_ref()->getPointerAlignment(module->getDataLayout()), llvm::cast<llvm::Value>(size));
        }
        else
        {
            if (!overwrite_reference)
            {
                value = value->load_alloca_and_reference(builder);
            }
            else if (value->is_alloca && value->type->is_reference)
            {
                value = value->load(builder, false);
            }

            auto rvalue = value->cast(lvalue_type, builder, module, value->is_alloca);
            builder.CreateStore(rvalue->get_ref(), lvalue->get_ref());
        }
    }

    virtual Value *load(llvm::IRBuilder<> &builder, const bool &load_reference = false)
    {
        if (!this->type->is_pointer() && !this->is_alloca)
        {
            return this;
        }

        if (this->type->is_array())
        {
            if (this->is_alloca && load_reference && this->type->is_reference)
            {
                auto value = this->load_reference(builder);
                return value->load_array(builder);
            }
            else
            {
                return this->load_array(builder);
            }
        }

        auto value = builder.CreateLoad(this->get_ref());

        if (this->is_alloca && load_reference && this->type->is_reference)
        {
            value = builder.CreateLoad(value);
        }

        auto type = this->type;

        if (!this->is_alloca && load_reference && type->is_reference)
        {
            type = Type::get_base(type, false);
        }

        return new Value(this->name + ".load", type, value);
    }

    Value *load_array(llvm::IRBuilder<> &builder)
    {
        auto ref = builder.CreateConstInBoundsGEP2_64(this->get_ref(), 0, 0, "");
        return new Value(this->name + ".load", Type::array_to_pointer(this->type, false), ref);
    }

    Value *load_reference(llvm::IRBuilder<> &builder)
    {
        if (this->type->is_reference)
        {
            auto value = builder.CreateLoad(this->get_ref());
            auto type = Type::get_base(this->type, false);

            return new Value(this->name + ".load", type, value);
        }

        return this;
    }

    Value *load_alloca(llvm::IRBuilder<> &builder)
    {
        if (this->is_alloca)
        {
            auto ref = builder.CreateLoad(this->get_ref());
            return new Value(this->name + ".load", this->type, ref);
        }

        return this;
    }

    Value *load_alloca_and_reference(llvm::IRBuilder<> &builder)
    {
        auto value = this;

        if (value->is_alloca)
        {
            if (value->type->is_reference && value->type->base->is_array())
            {
                value = value->load_reference(builder);
            }

            if (value->type->is_array())
            {
                return this->load_array(builder);
            }

            auto ref = builder.CreateLoad(this->get_ref());
            value = new Value(this->name + ".load", value->type, ref);
        }

        return value->load_reference(builder);
    }

    Value *gep(Value *index, llvm::IRBuilder<> &builder, std::unique_ptr<llvm::Module> &module)
    {
        auto index_value = index->cast(Type::i64(builder.getContext()), builder, module);
        return this->gep(index_value->get_ref(), builder, module);
    }

    Value *gep(const size_t &index, llvm::IRBuilder<> &builder, std::unique_ptr<llvm::Module> &module)
    {
        auto index_value = llvm::ConstantInt::get(Type::llvm_i64(builder.getContext()), index);
        return this->gep(index_value, builder, module);
    }

    Value *gep(llvm::Value *index, llvm::IRBuilder<> &builder, std::unique_ptr<llvm::Module> &module)
    {
        auto &context = builder.getContext();

        auto value = this->load_alloca_and_reference(builder);
        std::vector<llvm::Value *> idxs;

        if (!value->type->is_pointer())
        {
            idxs.push_back(llvm::ConstantInt::get(Type::llvm_i64(context), 0));
        }

        idxs.push_back(index);

        auto pointer = builder.CreateInBoundsGEP(value->get_ref(), idxs, "idx");
        auto type = Type::get_base(value->type, false);

        return new Value("idx", type, pointer, true);
    }

    Value *struct_gep(const std::string &name, Type *property_type, const size_t &index, llvm::IRBuilder<> &builder)
    {
        auto &context = builder.getContext();

        std::vector<llvm::Value *> idxs = {
            llvm::ConstantInt::get(Type::llvm_i32(context), 0),
            llvm::ConstantInt::get(Type::llvm_i32(context), index),
        };

        auto value = builder.CreateInBoundsGEP(this->get_ref(), idxs, name);

        return new Value(name, property_type, value, true);
    }

    Value *struct_cast(Type *dest, const size_t &padding, llvm::IRBuilder<> &builder)
    {
        auto type = this->type;

        if (type->equals(dest))
        {
            return this;
        }

        auto &context = builder.getContext();

        auto bytes = builder.CreateBitCast(this->get_ref(), Type::llvm_i8(builder.getContext())->getPointerTo());

        std::vector<llvm::Value *> idxs = {
            llvm::ConstantInt::get(Type::llvm_i64(context), padding),
        };

        auto value = builder.CreateInBoundsGEP(bytes, idxs, "idx");
        value = builder.CreateBitCast(value, Type::pointer(dest)->get_ref());

        return new Value(this->name, dest, value, true);
    }

    Value *union_cast(Type *dest, llvm::IRBuilder<> &builder)
    {
        auto value = builder.CreateBitCast(this->get_ref(), dest->get_ref()->getPointerTo());
        return new Value(this->name, dest, value, true);
    }

    virtual Value *cast(Type *dest, llvm::IRBuilder<> &builder, std::unique_ptr<llvm::Module> &module, const bool &load = true);

    static Value *add(llvm::IRBuilder<> &builder, std::unique_ptr<llvm::Module> &module, Value *lvalue, Value *rvalue);
    Value *add(std::unique_ptr<llvm::Module> &module, llvm::IRBuilder<> &builder, Value *rvalue);

    static Value *sub(llvm::IRBuilder<> &builder, std::unique_ptr<llvm::Module> &module, Value *lvalue, Value *rvalue);
    Value *sub(std::unique_ptr<llvm::Module> &module, llvm::IRBuilder<> &builder, Value *rvalue);

    static Value *mul(llvm::IRBuilder<> &builder, std::unique_ptr<llvm::Module> &module, Value *lvalue, Value *rvalue);
    Value *mul(std::unique_ptr<llvm::Module> &module, llvm::IRBuilder<> &builder, Value *rvalue);

    static Value *div(llvm::IRBuilder<> &builder, std::unique_ptr<llvm::Module> &module, Value *lvalue, Value *rvalue);
    Value *div(std::unique_ptr<llvm::Module> &module, llvm::IRBuilder<> &builder, Value *rvalue);

    static Value *mod(llvm::IRBuilder<> &builder, std::unique_ptr<llvm::Module> &module, Value *lvalue, Value *rvalue);
    Value *mod(std::unique_ptr<llvm::Module> &module, llvm::IRBuilder<> &builder, Value *rvalue);

    static Value *boolean_xor(llvm::IRBuilder<> &builder, std::unique_ptr<llvm::Module> &module, Value *lvalue, Value *rvalue);
    Value *boolean_xor(std::unique_ptr<llvm::Module> &module, llvm::IRBuilder<> &builder, Value *rvalue);

    static Value *bitwise_or(llvm::IRBuilder<> &builder, std::unique_ptr<llvm::Module> &module, Value *lvalue, Value *rvalue);
    Value *bitwise_or(std::unique_ptr<llvm::Module> &module, llvm::IRBuilder<> &builder, Value *rvalue);

    static Value *bitwise_and(llvm::IRBuilder<> &builder, std::unique_ptr<llvm::Module> &module, Value *lvalue, Value *rvalue);
    Value *bitwise_and(std::unique_ptr<llvm::Module> &module, llvm::IRBuilder<> &builder, Value *rvalue);

    static Value *rshift(llvm::IRBuilder<> &builder, std::unique_ptr<llvm::Module> &module, Value *lvalue, Value *rvalue);
    Value *rshift(std::unique_ptr<llvm::Module> &module, llvm::IRBuilder<> &builder, Value *rvalue);

    static Value *lrshift(llvm::IRBuilder<> &builder, std::unique_ptr<llvm::Module> &module, Value *lvalue, Value *rvalue);
    Value *lrshift(std::unique_ptr<llvm::Module> &module, llvm::IRBuilder<> &builder, Value *rvalue);

    static Value *lshift(llvm::IRBuilder<> &builder, std::unique_ptr<llvm::Module> &module, Value *lvalue, Value *rvalue);
    Value *lshift(std::unique_ptr<llvm::Module> &module, llvm::IRBuilder<> &builder, Value *rvalue);

    static Value *equal(llvm::IRBuilder<> &builder, std::unique_ptr<llvm::Module> &module, Value *lvalue, Value *rvalue);

    static Value *not_equal(llvm::IRBuilder<> &builder, std::unique_ptr<llvm::Module> &module, Value *lvalue, Value *rvalue);

    static Value *less_than(llvm::IRBuilder<> &builder, std::unique_ptr<llvm::Module> &module, Value *lvalue, Value *rvalue);

    static Value *less_than_or_equal(llvm::IRBuilder<> &builder, std::unique_ptr<llvm::Module> &module, Value *lvalue, Value *rvalue);

    static Value *greater_than(llvm::IRBuilder<> &builder, std::unique_ptr<llvm::Module> &module, Value *lvalue, Value *rvalue);

    static Value *greater_than_or_equal(llvm::IRBuilder<> &builder, std::unique_ptr<llvm::Module> &module, Value *lvalue, Value *rvalue);
};
} // namespace Sand
