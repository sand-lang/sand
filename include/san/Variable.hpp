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
    bool is_constant = false;

    Variable() = default;
    Variable(Type *type_,
             llvm::Value *value_ = nullptr,
             const bool &is_alloca_ = false,
             const bool &is_constant_ = false) : type(type_),
                                                 value(value_),
                                                 is_alloca(is_alloca_),
                                                 is_constant(is_constant_) {}

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

    Variable *load(llvm::IRBuilder<> &builder)
    {
        auto copy = new Variable(*this);
        copy->value = copy->get(builder);
        copy->is_alloca = false;

        return copy;
    }
};
} // namespace San
