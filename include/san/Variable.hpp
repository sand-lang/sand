#pragma once

#include <san/Type.hpp>

#include <llvm/IR/IRBuilder.h>

namespace San
{
enum class VariableValueType
{
    Simple,
    Alloca,
    Load,
};

class Variable
{
public:
    Type *type = nullptr;
    llvm::Value *value = nullptr;

    VariableValueType value_type = VariableValueType::Simple;

    Variable() = default;
    Variable(Type *type_,
             llvm::Value *value_ = nullptr,
             const VariableValueType &value_type_ = VariableValueType::Simple) : type(type_),
                                                                                 value(value_),
                                                                                 value_type(value_type_) {}

    virtual ~Variable() {}

    llvm::Value *get(llvm::IRBuilder<> &builder)
    {
        if (this->value_type == VariableValueType::Alloca)
        {
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

    inline Variable *load(llvm::IRBuilder<> &builder)
    {
        VariableValueType value_type = VariableValueType::Simple;

        if (this->value_type == VariableValueType::Alloca)
        {
            value_type = VariableValueType::Load;
        }

        return new Variable(new Type(*this->type), this->get(builder), value_type);
    }

    Variable *cast(const Type *dest, llvm::IRBuilder<> &builder)
    {
        auto value = this->get(builder);

        if (this->type->is_integer())
        {
            if (dest->is_integer())
            {
                bool is_signed = this->type->qualifiers.is_signed;

                if (is_signed)
                {
                    value = builder.CreateSExtOrTrunc(value, dest->ref);
                }
                else
                {
                    value = builder.CreateZExtOrTrunc(value, dest->ref);
                }

                if (dest->is_boolean())
                {
                    value = builder.CreateICmpNE(value, llvm::ConstantInt::get(value->getType(), 0));
                }
            }
            else if (dest->is_pointer())
            {
                value = builder.CreateIntToPtr(this->value, dest->ref);
            }

            return new Variable(new Type(*dest), value, VariableValueType::Simple);
        }
        else if (this->type->is_pointer())
        {
            if (dest->is_boolean())
            {
                auto type = reinterpret_cast<llvm::PointerType *>(this->type->ref);
                value = builder.CreateICmpNE(this->value, llvm::ConstantPointerNull::get(type));
            }
            else if (dest->is_integer())
            {
                value = builder.CreatePtrToInt(this->value, dest->ref);
            }
            else if (dest->is_pointer())
            {
                value = builder.CreateBitCast(this->value, dest->ref);
            }

            return new Variable(new Type(*dest), value, VariableValueType::Simple);
        }

        return this;
    }

    static std::pair<Variable *, Variable *> balance_types(Variable *l, Variable *r, llvm::IRBuilder<> &builder)
    {
        auto pair = std::pair<Variable *, Variable *>(l, r);

        if (l->type->is_integer() && r->type->is_integer())
        {
            auto lbits = l->type->ref->getIntegerBitWidth();
            auto rbits = r->type->ref->getIntegerBitWidth();

            if (lbits < rbits)
            {
                pair.first = pair.first->cast(r->type, builder);
            }
            else if (rbits < lbits)
            {
                pair.second = pair.second->cast(l->type, builder);
            }
        }

        return pair;
    }

    inline static std::pair<Variable *, Variable *> load_and_balance_types(Variable *l, Variable *r, llvm::IRBuilder<> &builder)
    {
        return balance_types(l->load(builder), r->load(builder), builder);
    }
};
} // namespace San
