#pragma once

#include <san/Type.hpp>

#include <llvm/IR/IRBuilder.h>

namespace San
{
enum class VariableValueType
{
    Simple,
    Alloca,
    GEP,
    Load,
};

class Variable
{
public:
    Type *type = nullptr;
    llvm::Value *value = nullptr;

    VariableValueType value_type = VariableValueType::Simple;

    Variable *calling_variable = nullptr;

    bool can_be_taken = false;

    Variable() = default;
    Variable(Type *type_,
             llvm::Value *value_ = nullptr,
             const VariableValueType &value_type_ = VariableValueType::Simple) : type(type_),
                                                                                 value(value_),
                                                                                 value_type(value_type_) {}

    virtual ~Variable() {}

    llvm::Value *get(llvm::IRBuilder<> &builder)
    {
        if (this->value_type == VariableValueType::Alloca || this->value_type == VariableValueType::GEP)
        {
            if (this->type->is_reference())
            {
                auto load1 = builder.CreateLoad(this->value);
                return builder.CreateLoad(load1);
            }

            return builder.CreateLoad(this->value);
        }

        return this->value;
    }

    llvm::AllocaInst *get_alloca()
    {
        if (this->value_type == VariableValueType::Alloca)
        {
            return reinterpret_cast<llvm::AllocaInst *>(this->value);
        }
        else if (this->value_type == VariableValueType::Load)
        {
            auto operand = reinterpret_cast<llvm::LoadInst *>(this->value)->getPointerOperand();
            return reinterpret_cast<llvm::AllocaInst *>(operand);
        }

        return nullptr;
    }

    inline bool is_allocated_variable()
    {
        return !!llvm::isa<llvm::AllocaInst>(this->value) || !!llvm::isa<llvm::GlobalVariable>(this->value);
    }

    Variable *load(llvm::IRBuilder<> &builder)
    {
        VariableValueType value_type = VariableValueType::Simple;

        if (this->value_type == VariableValueType::Alloca || this->value_type == VariableValueType::GEP)
        {
            value_type = VariableValueType::Load;
        }

        return new Variable(new Type(*this->type), this->get(builder), value_type);
    }

    Variable *cast(const Type *dest, llvm::IRBuilder<> &builder, const bool &load = true)
    {
        auto value = load ? this->get(builder) : this->value;
        auto type = this->type;

        if (this->type->is_reference())
        {
            if (!load)
            {
                value = builder.CreateLoad(value);
            }

            type = type->base;
        }

        if (dest->is_reference())
        {
            dest = dest->base;
        }

        if (type->is_integer())
        {
            if (dest->is_integer())
            {
                auto lbits = dest->ref->getIntegerBitWidth();
                auto rbits = type->ref->getIntegerBitWidth();

                if (lbits != rbits)
                {
                    bool is_signed = type->qualifiers.is_signed;

                    if (is_signed)
                    {
                        value = builder.CreateSExtOrTrunc(value, dest->ref);
                    }
                    else
                    {
                        value = builder.CreateZExtOrTrunc(value, dest->ref);
                    }
                }

                if (dest->is_boolean())
                {
                    value = builder.CreateICmpNE(value, llvm::ConstantInt::get(value->getType(), 0));
                }
            }
            else if (dest->is_pointer())
            {
                value = builder.CreateIntToPtr(value, dest->ref);
            }

            return new Variable(new Type(*dest), value, VariableValueType::Simple);
        }
        else if (type->is_pointer())
        {
            if (dest->is_boolean())
            {
                auto pointer_type = reinterpret_cast<llvm::PointerType *>(type->ref);
                value = builder.CreateICmpNE(value, llvm::ConstantPointerNull::get(pointer_type));
            }
            else if (dest->is_integer())
            {
                value = builder.CreatePtrToInt(value, dest->ref);
            }
            else if (dest->is_pointer())
            {
                value = builder.CreateBitCast(value, dest->ref);
            }

            return new Variable(new Type(*dest), value, VariableValueType::Simple);
        }

        return this;
    }

    Variable *cast_to_bytes(llvm::IRBuilder<> &builder)
    {
        auto type = llvm::Type::getInt8PtrTy(builder.getContext());

        auto value = this->value;

        if (this->type->is_reference())
        {
            value = builder.CreateLoad(value);
        }

        value = builder.CreateBitCast(value, type);

        return new Variable(new Type(type), value, this->value_type);
    }

    static std::pair<Variable *, Variable *> load_and_balance_types(Variable *l, Variable *r, llvm::IRBuilder<> &builder)
    {
        l = l->load(builder);
        r = r->cast(l->type, builder);

        return std::pair(l, r);
    }

    void copy(Variable *target, llvm::IRBuilder<> &builder, std::unique_ptr<llvm::Module> &module)
    {
        if (this->type->is_struct() && target->type->is_struct())
        {
            auto lvalue = target->cast_to_bytes(builder)->value;
            auto rvalue = this->cast_to_bytes(builder)->value;

            auto size = llvm::ConstantInt::get(llvm::Type::getInt64Ty(builder.getContext()), this->type->size(module));

            builder.CreateMemCpy(lvalue, 1, rvalue, 1, llvm::cast<llvm::Value>(size));
        }
        else if (this->type->is_pointer())
        {
            // std::cout << "it's a pointer" << std::endl;
            // auto lvalue = builder.CreateLoad(this->value);
            auto lvalue = this->cast(target->type, builder, false);
            builder.CreateStore(lvalue->value, target->value);
        }
        else
        {
            std::cout << "it's something else" << std::endl;
            auto rvalue = this->load(builder)->cast(target->type, builder);
            builder.CreateStore(rvalue->value, target->value);
        }
    }
};
} // namespace San
