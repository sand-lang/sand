#pragma once

#include <san/Type.hpp>

#include <llvm/IR/Type.h>
#include <llvm/IR/Value.h>

namespace San
{
class Variable
{
public:
    Type *type = nullptr;
    llvm::Value *value = nullptr;

    Variable() = default;
    Variable(Type *type_, llvm::Value *value_ = nullptr) : type(type_), value(value_) {}

    virtual ~Variable() {}
};
} // namespace San
