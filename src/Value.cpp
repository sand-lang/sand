#include <Sand/Value.hpp>

#include <Sand/Values/Constant.hpp>
#include <Sand/Values/Variable.hpp>

#include <Sand/Types/FunctionType.hpp>

using namespace Sand;

Value *Value::call(llvm::IRBuilder<> &builder, std::unique_ptr<llvm::Module> &module, std::vector<Value *> args)
{
    auto called_type = this->type;

    if (called_type->is_pointer())
    {
        called_type = called_type->base;
    }

    auto type = dynamic_cast<Types::FunctionType *>(called_type);

    std::vector<llvm::Value *> llvm_args;

    if (this->calling_variable != nullptr)
    {
        llvm_args.push_back(this->calling_variable->get_ref());
    }

    size_t start = type->is_method ? 1 : 0;
    for (size_t i = 0; i < args.size(); i++)
    {
        auto arg = args[i];

        auto not_variadic = i <= (type->args.size() - (type->is_variadic ? 1 : 0) - start);

        if (not_variadic)
        {
            auto function_arg = type->args[i + start];

            if (function_arg.type->is_reference && !Type::equals((arg->is_alloca && !arg->is_temporary) ? Type::reference(arg->type) : arg->type, function_arg.type))
            {
                auto reference = Values::Variable::create("ref", function_arg.type->base, builder);
                reference->store(arg, builder, module);

                arg = reference;
            }

            auto casted = arg->cast(function_arg.type, builder);
            llvm_args.push_back(casted->get_ref());
        }
        else
        {
            auto value = arg->load_alloca_and_reference(builder);
            llvm_args.push_back(value->get_ref());
        }
    }

    if (type->is_sret)
    {
        auto tmp = Values::Variable::create("tmp", type->return_type, builder);
        tmp->can_be_taken = true;
        tmp->is_temporary = true;

        llvm_args.insert(llvm_args.begin(), tmp->get_ref());

        auto call = builder.CreateCall(type->get_ref(), this->get_ref(), llvm_args);
        call->addAttribute(1, llvm::Attribute::StructRet);

        return tmp;
    }
    else
    {
        auto ret = builder.CreateCall(type->get_ref(), this->get_ref(), llvm_args);
        return new Value("call", type->return_type, static_cast<llvm::Value *>(ret));
    }
}

Value *Value::add(llvm::IRBuilder<> &builder, Value *lvalue, Value *rvalue)
{
    auto ltype = Type::behind_reference(lvalue->type);
    auto rtype = Type::behind_reference(rvalue->type);

    if (ltype->is_integer())
    {
        lvalue = lvalue->load_alloca_and_reference(builder);
        rvalue = rvalue->cast(lvalue->type, builder);

        if (dynamic_cast<Values::Constant *>(lvalue) && dynamic_cast<Values::Constant *>(rvalue))
        {
            auto constant_lvalue = static_cast<Values::Constant *>(lvalue)->get_ref();
            auto constant_rvalue = static_cast<Values::Constant *>(rvalue)->get_ref();

            auto value = llvm::ConstantExpr::getAdd(constant_lvalue, constant_rvalue);
            return new Values::Constant("add", lvalue->type, value);
        }

        auto value = builder.CreateAdd(lvalue->get_ref(), rvalue->get_ref());
        return new Value("add", lvalue->type, value);
    }
    else if (ltype->is_floating_point())
    {
        lvalue = lvalue->load_alloca_and_reference(builder);
        rvalue = rvalue->cast(lvalue->type, builder);

        if (dynamic_cast<Values::Constant *>(lvalue) && dynamic_cast<Values::Constant *>(rvalue))
        {
            auto constant_lvalue = static_cast<Values::Constant *>(lvalue)->get_ref();
            auto constant_rvalue = static_cast<Values::Constant *>(rvalue)->get_ref();

            auto value = llvm::ConstantExpr::getFAdd(constant_lvalue, constant_rvalue);
            return new Values::Constant("add", lvalue->type, value);
        }

        auto value = builder.CreateFAdd(lvalue->get_ref(), rvalue->get_ref());
        return new Value("add", lvalue->type, value);
    }
    else if (ltype->is_pointer() && rtype->is_integer())
    {
        lvalue = lvalue->load_alloca_and_reference(builder);
        rvalue = rvalue->load_alloca_and_reference(builder);

        auto value = lvalue->gep(rvalue, builder);
        value->is_alloca = false;
        value->type = ltype;

        return value;
    }

    return nullptr;
}

Value *Value::add(std::unique_ptr<llvm::Module> &module, llvm::IRBuilder<> &builder, Value *rvalue)
{
    if (auto result = Value::add(builder, this, rvalue))
    {
        this->store(result, builder, module);
        return this;
    }

    return nullptr;
}

Value *Value::sub(llvm::IRBuilder<> &builder, Value *lvalue, Value *rvalue)
{
    auto ltype = Type::behind_reference(lvalue->type);
    auto rtype = Type::behind_reference(rvalue->type);

    if (ltype->is_integer())
    {
        lvalue = lvalue->load_alloca_and_reference(builder);
        rvalue = rvalue->cast(lvalue->type, builder);

        if (dynamic_cast<Values::Constant *>(lvalue) && dynamic_cast<Values::Constant *>(rvalue))
        {
            auto constant_lvalue = static_cast<Values::Constant *>(lvalue)->get_ref();
            auto constant_rvalue = static_cast<Values::Constant *>(rvalue)->get_ref();

            auto value = llvm::ConstantExpr::getSub(constant_lvalue, constant_rvalue);
            return new Values::Constant("sub", lvalue->type, value);
        }

        auto value = builder.CreateSub(lvalue->get_ref(), rvalue->get_ref());
        return new Value("sub", lvalue->type, value);
    }
    else if (ltype->is_floating_point())
    {
        lvalue = lvalue->load_alloca_and_reference(builder);
        rvalue = rvalue->cast(lvalue->type, builder);

        if (dynamic_cast<Values::Constant *>(lvalue) && dynamic_cast<Values::Constant *>(rvalue))
        {
            auto constant_lvalue = static_cast<Values::Constant *>(lvalue)->get_ref();
            auto constant_rvalue = static_cast<Values::Constant *>(rvalue)->get_ref();

            auto value = llvm::ConstantExpr::getFSub(constant_lvalue, constant_rvalue);
            return new Values::Constant("sub", lvalue->type, value);
        }

        auto value = builder.CreateFSub(lvalue->get_ref(), rvalue->get_ref());
        return new Value("sub", lvalue->type, value);
    }
    else if (ltype->is_pointer() && rtype->is_integer())
    {
        lvalue = lvalue->load_alloca_and_reference(builder);
        rvalue = rvalue->load_alloca_and_reference(builder);

        auto value = lvalue->gep(rvalue, builder);
        value->is_alloca = false;
        value->type = ltype;

        return value;
    }

    return nullptr;
}

Value *Value::sub(std::unique_ptr<llvm::Module> &module, llvm::IRBuilder<> &builder, Value *rvalue)
{
    if (auto result = Value::sub(builder, this, rvalue))
    {
        this->store(result, builder, module);
        return this;
    }

    return nullptr;
}

Value *Value::mul(llvm::IRBuilder<> &builder, Value *lvalue, Value *rvalue)
{
    auto ltype = Type::behind_reference(lvalue->type);
    auto rtype = Type::behind_reference(rvalue->type);

    if (lvalue->type->is_integer())
    {
        lvalue = lvalue->load_alloca_and_reference(builder);
        rvalue = rvalue->cast(lvalue->type, builder);

        auto value = builder.CreateNSWMul(lvalue->get_ref(), rvalue->get_ref());
        return new Value("mul", lvalue->type, value);
    }
    else if (lvalue->type->is_floating_point())
    {
        lvalue = lvalue->load_alloca_and_reference(builder);
        rvalue = rvalue->cast(lvalue->type, builder);

        auto value = builder.CreateFMul(lvalue->get_ref(), rvalue->get_ref());
        return new Value("mul", lvalue->type, value);
    }

    return nullptr;
}

Value *Value::mul(std::unique_ptr<llvm::Module> &module, llvm::IRBuilder<> &builder, Value *rvalue)
{
    if (auto result = Value::mul(builder, this, rvalue))
    {
        this->store(result, builder, module);
        return this;
    }

    return nullptr;
}

Value *Value::div(llvm::IRBuilder<> &builder, Value *lvalue, Value *rvalue)
{
    auto ltype = Type::behind_reference(lvalue->type);
    auto rtype = Type::behind_reference(rvalue->type);

    if (lvalue->type->is_integer())
    {
        lvalue = lvalue->load_alloca_and_reference(builder);
        rvalue = rvalue->cast(lvalue->type, builder);

        auto value = builder.CreateSDiv(lvalue->get_ref(), rvalue->get_ref());
        return new Value("div", lvalue->type, value);
    }
    else if (lvalue->type->is_floating_point())
    {
        lvalue = lvalue->load_alloca_and_reference(builder);
        rvalue = rvalue->cast(lvalue->type, builder);

        auto value = builder.CreateFDiv(lvalue->get_ref(), rvalue->get_ref());
        return new Value("div", lvalue->type, value);
    }

    return nullptr;
}

Value *Value::div(std::unique_ptr<llvm::Module> &module, llvm::IRBuilder<> &builder, Value *rvalue)
{
    if (auto result = Value::div(builder, this, rvalue))
    {
        this->store(result, builder, module);
        return this;
    }

    return nullptr;
}

Value *Value::mod(llvm::IRBuilder<> &builder, Value *lvalue, Value *rvalue)
{
    auto ltype = Type::behind_reference(lvalue->type);
    auto rtype = Type::behind_reference(rvalue->type);

    if (lvalue->type->is_integer())
    {
        lvalue = lvalue->load_alloca_and_reference(builder);
        rvalue = rvalue->cast(lvalue->type, builder);

        auto value = builder.CreateSRem(lvalue->get_ref(), rvalue->get_ref());
        return new Value("mod", lvalue->type, value);
    }
    else if (lvalue->type->is_floating_point())
    {
        lvalue = lvalue->load_alloca_and_reference(builder);
        rvalue = rvalue->cast(lvalue->type, builder);

        auto value = builder.CreateFRem(lvalue->get_ref(), rvalue->get_ref());
        return new Value("mod", lvalue->type, value);
    }

    return nullptr;
}

Value *Value::mod(std::unique_ptr<llvm::Module> &module, llvm::IRBuilder<> &builder, Value *rvalue)
{
    if (auto result = Value::mod(builder, this, rvalue))
    {
        this->store(result, builder, module);
        return this;
    }

    return nullptr;
}

Value *Value::boolean_xor(llvm::IRBuilder<> &builder, Value *lvalue, Value *rvalue)
{
    auto ltype = Type::behind_reference(lvalue->type);
    auto rtype = Type::behind_reference(rvalue->type);

    if (ltype->is_integer())
    {
        lvalue = lvalue->load_alloca_and_reference(builder);
        rvalue = rvalue->cast(lvalue->type, builder);

        auto value = builder.CreateXor(lvalue->get_ref(), rvalue->get_ref());
        return new Value("xor", lvalue->type, value);
    }

    return nullptr;
}

Value *Value::boolean_xor(std::unique_ptr<llvm::Module> &module, llvm::IRBuilder<> &builder, Value *rvalue)
{
    if (auto result = Value::boolean_xor(builder, this, rvalue))
    {
        this->store(result, builder, module);
        return this;
    }

    return nullptr;
}

Value *Value::bitwise_or(llvm::IRBuilder<> &builder, Value *lvalue, Value *rvalue)
{
    auto ltype = Type::behind_reference(lvalue->type);
    auto rtype = Type::behind_reference(rvalue->type);

    if (ltype->is_integer())
    {
        lvalue = lvalue->load_alloca_and_reference(builder);
        rvalue = rvalue->cast(lvalue->type, builder);

        auto value = builder.CreateOr(lvalue->get_ref(), rvalue->get_ref());
        return new Value("or", lvalue->type, value);
    }

    return nullptr;
}

Value *Value::bitwise_or(std::unique_ptr<llvm::Module> &module, llvm::IRBuilder<> &builder, Value *rvalue)
{
    if (auto result = Value::bitwise_or(builder, this, rvalue))
    {
        this->store(result, builder, module);
        return this;
    }

    return nullptr;
}

Value *Value::bitwise_and(llvm::IRBuilder<> &builder, Value *lvalue, Value *rvalue)
{
    auto ltype = Type::behind_reference(lvalue->type);
    auto rtype = Type::behind_reference(rvalue->type);

    if (ltype->is_integer())
    {
        lvalue = lvalue->load_alloca_and_reference(builder);
        rvalue = rvalue->cast(lvalue->type, builder);

        auto value = builder.CreateAnd(lvalue->get_ref(), rvalue->get_ref());
        return new Value("and", lvalue->type, value);
    }

    return nullptr;
}

Value *Value::bitwise_and(std::unique_ptr<llvm::Module> &module, llvm::IRBuilder<> &builder, Value *rvalue)
{
    if (auto result = Value::bitwise_and(builder, this, rvalue))
    {
        this->store(result, builder, module);
        return this;
    }

    return nullptr;
}

Value *Value::rshift(llvm::IRBuilder<> &builder, Value *lvalue, Value *rvalue)
{
    auto ltype = Type::behind_reference(lvalue->type);
    auto rtype = Type::behind_reference(rvalue->type);

    if (lvalue->type->is_integer() && rvalue->type->is_integer())
    {
        lvalue = lvalue->load_alloca_and_reference(builder);
        rvalue = rvalue->cast(lvalue->type, builder);

        auto value = builder.CreateAShr(lvalue->get_ref(), rvalue->get_ref());
        return new Value("rshift", lvalue->type, value);
    }

    return nullptr;
}

Value *Value::rshift(std::unique_ptr<llvm::Module> &module, llvm::IRBuilder<> &builder, Value *rvalue)
{
    if (auto result = Value::rshift(builder, this, rvalue))
    {
        this->store(result, builder, module);
        return this;
    }

    return nullptr;
}

Value *Value::lrshift(llvm::IRBuilder<> &builder, Value *lvalue, Value *rvalue)
{
    auto ltype = Type::behind_reference(lvalue->type);
    auto rtype = Type::behind_reference(rvalue->type);

    if (lvalue->type->is_integer() && rvalue->type->is_integer())
    {
        lvalue = lvalue->load_alloca_and_reference(builder);
        rvalue = rvalue->cast(lvalue->type, builder);

        auto value = builder.CreateLShr(lvalue->get_ref(), rvalue->get_ref());
        return new Value("rshift", lvalue->type, value);
    }

    return nullptr;
}

Value *Value::lrshift(std::unique_ptr<llvm::Module> &module, llvm::IRBuilder<> &builder, Value *rvalue)
{
    if (auto result = Value::lrshift(builder, this, rvalue))
    {
        this->store(result, builder, module);
        return this;
    }

    return nullptr;
}

Value *Value::lshift(llvm::IRBuilder<> &builder, Value *lvalue, Value *rvalue)
{
    auto ltype = Type::behind_reference(lvalue->type);
    auto rtype = Type::behind_reference(rvalue->type);

    if (lvalue->type->is_integer() && rvalue->type->is_integer())
    {
        lvalue = lvalue->load_alloca_and_reference(builder);
        rvalue = rvalue->cast(lvalue->type, builder);

        auto value = builder.CreateShl(lvalue->get_ref(), rvalue->get_ref());
        return new Value("rshift", lvalue->type, value);
    }

    return nullptr;
}

Value *Value::lshift(std::unique_ptr<llvm::Module> &module, llvm::IRBuilder<> &builder, Value *rvalue)
{
    if (auto result = Value::lshift(builder, this, rvalue))
    {
        this->store(result, builder, module);
        return this;
    }

    return nullptr;
}

Value *Value::equal(llvm::IRBuilder<> &builder, Value *lvalue, Value *rvalue)
{
    auto ltype = Type::behind_reference(lvalue->type);
    auto rtype = Type::behind_reference(rvalue->type);

    auto type = Type::i1(builder.getContext());

    if (ltype->is_integer() || ltype->is_pointer())
    {
        lvalue = lvalue->load_alloca_and_reference(builder);
        rvalue = rvalue->cast(lvalue->type, builder);

        auto value = builder.CreateICmpEQ(lvalue->get_ref(), rvalue->get_ref());
        return new Value("eq", type, value, false);
    }
    else if (ltype->is_floating_point())
    {
        lvalue = lvalue->load_alloca_and_reference(builder);
        rvalue = rvalue->cast(lvalue->type, builder);

        auto value = builder.CreateFCmpOEQ(lvalue->get_ref(), rvalue->get_ref());
        return new Value("eq", type, value, false);
    }

    return nullptr;
}

Value *Value::not_equal(llvm::IRBuilder<> &builder, Value *lvalue, Value *rvalue)
{
    auto ltype = Type::behind_reference(lvalue->type);
    auto rtype = Type::behind_reference(rvalue->type);

    auto type = Type::i1(builder.getContext());

    if (ltype->is_integer() || ltype->is_pointer())
    {
        lvalue = lvalue->load_alloca_and_reference(builder);
        rvalue = rvalue->cast(lvalue->type, builder);

        auto value = builder.CreateICmpNE(lvalue->get_ref(), rvalue->get_ref());
        return new Value("ne", type, value);
    }
    else if (ltype->is_floating_point())
    {
        lvalue = lvalue->load_alloca_and_reference(builder);
        rvalue = rvalue->cast(lvalue->type, builder);

        auto value = builder.CreateFCmpUNE(lvalue->get_ref(), rvalue->get_ref());
        return new Value("ne", type, value);
    }

    return nullptr;
}

Value *Value::less_than(llvm::IRBuilder<> &builder, Value *lvalue, Value *rvalue)
{
    auto ltype = Type::behind_reference(lvalue->type);
    auto rtype = Type::behind_reference(rvalue->type);

    auto type = Type::i1(builder.getContext());

    if (ltype->is_integer() || ltype->is_pointer())
    {
        lvalue = lvalue->load_alloca_and_reference(builder);
        rvalue = rvalue->cast(lvalue->type, builder);

        auto value = builder.CreateICmpSLT(lvalue->get_ref(), rvalue->get_ref());
        return new Value("lt", type, value);
    }
    else if (ltype->is_floating_point())
    {
        lvalue = lvalue->load_alloca_and_reference(builder);
        rvalue = rvalue->cast(lvalue->type, builder);

        auto value = builder.CreateFCmpOLT(lvalue->get_ref(), rvalue->get_ref());
        return new Value("lt", type, value);
    }

    return nullptr;
}

Value *Value::less_than_or_equal(llvm::IRBuilder<> &builder, Value *lvalue, Value *rvalue)
{
    auto ltype = Type::behind_reference(lvalue->type);
    auto rtype = Type::behind_reference(rvalue->type);

    auto type = Type::i1(builder.getContext());

    if (ltype->is_integer() || ltype->is_pointer())
    {
        lvalue = lvalue->load_alloca_and_reference(builder);
        rvalue = rvalue->cast(lvalue->type, builder);

        auto value = builder.CreateICmpSLE(lvalue->get_ref(), rvalue->get_ref());
        return new Value("lte", type, value);
    }
    else if (ltype->is_floating_point())
    {
        lvalue = lvalue->load_alloca_and_reference(builder);
        rvalue = rvalue->cast(lvalue->type, builder);

        auto value = builder.CreateFCmpOLE(lvalue->get_ref(), rvalue->get_ref());
        return new Value("lte", type, value);
    }

    return nullptr;
}

Value *Value::greater_than(llvm::IRBuilder<> &builder, Value *lvalue, Value *rvalue)
{
    auto ltype = Type::behind_reference(lvalue->type);
    auto rtype = Type::behind_reference(rvalue->type);

    auto type = Type::i1(builder.getContext());

    if (ltype->is_integer() || ltype->is_pointer())
    {
        lvalue = lvalue->load_alloca_and_reference(builder);
        rvalue = rvalue->cast(lvalue->type, builder);

        auto value = builder.CreateICmpSGT(lvalue->get_ref(), rvalue->get_ref());
        return new Value("gt", type, value);
    }
    else if (ltype->is_floating_point())
    {
        lvalue = lvalue->load_alloca_and_reference(builder);
        rvalue = rvalue->cast(lvalue->type, builder);

        auto value = builder.CreateFCmpOGT(lvalue->get_ref(), rvalue->get_ref());
        return new Value("gt", type, value);
    }

    return nullptr;
}

Value *Value::greater_than_or_equal(llvm::IRBuilder<> &builder, Value *lvalue, Value *rvalue)
{
    auto ltype = Type::behind_reference(lvalue->type);
    auto rtype = Type::behind_reference(rvalue->type);

    auto type = Type::i1(builder.getContext());

    if (ltype->is_integer() || ltype->is_pointer())
    {
        lvalue = lvalue->load_alloca_and_reference(builder);
        rvalue = rvalue->cast(lvalue->type, builder);

        auto value = builder.CreateICmpSGE(lvalue->get_ref(), rvalue->get_ref());
        return new Value("gte", type, value);
    }
    else if (ltype->is_floating_point())
    {
        lvalue = lvalue->load_alloca_and_reference(builder);
        rvalue = rvalue->cast(lvalue->type, builder);

        auto value = builder.CreateFCmpOGE(lvalue->get_ref(), rvalue->get_ref());
        return new Value("gte", type, value);
    }

    return nullptr;
}
