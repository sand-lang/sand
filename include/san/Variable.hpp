#pragma once

#include <san/Type.hpp>

#include <llvm/IR/IRBuilder.h>

namespace San
{
class Variable
{
public:
    Type *type = nullptr;
    llvm::Value *value = nullptr;

    bool is_alloca = false;

    Variable() = default;
    Variable(Type *type_,
             llvm::Value *value_ = nullptr,
             const bool &is_alloca_ = false) : type(type_),
                                                 value(value_),
                                                 is_alloca(is_alloca_) {}

    virtual ~Variable() {}

    llvm::Value *get(llvm::IRBuilder<> &builder)
    {
        if (this->is_alloca)
        {
            return builder.CreateLoad(this->value);
        }

        return this->value;
    }

    llvm::AllocaInst *get_alloca()
    {
        if (!this->is_alloca)
        {
            return nullptr;
        }

        return reinterpret_cast<llvm::AllocaInst *>(this->value);
    }

    inline Variable *load(llvm::IRBuilder<> &builder)
    {
        return new Variable(new Type(*this->type), this->get(builder), false);
    }

    Variable *cast(const Type *dest, llvm::IRBuilder<> &builder)
    {
        auto value = this->get(builder);

        if (this->type->is_integer() && dest->is_integer())
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

            return new Variable(new Type(*dest), value, false);
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
