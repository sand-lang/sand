#pragma once

#include <Sand/Value.hpp>

#include <llvm/IR/IRBuilder.h>

namespace Sand::Values
{
class Variable : public Value
{
public:
    bool can_be_taken = false;

    Variable(const std::string &name, Type *type, llvm::Value *ref) : Value(name, type, ref, true) {}

    static Variable *create(const std::string &name, Type *type, llvm::IRBuilder<> &builder)
    {
        auto alloca = builder.CreateAlloca(type->get_ref(), nullptr, name);
        return new Variable(name, type, alloca);
    }
};
} // namespace Sand::Values
