#pragma once

#include <llvm/IR/Type.h>
#include <llvm/IR/Value.h>

namespace San
{
class Variable
{
public:
    llvm::Type *type = nullptr;
    llvm::Value *value = nullptr;

    Variable() = default;
    Variable(llvm::Type *type_) : type(type_) {}
    Variable(llvm::Value *value_) : type(value_->getType()), value(value_) {}

    virtual ~Variable() {}
};
} // namespace San
