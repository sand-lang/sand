#pragma once

#include <Sand/Type.hpp>

#include <llvm/IR/IRBuilder.h>

namespace Sand::Types
{
class VariadicType : public Type
{
public:
    std::vector<Type *> types;

    VariadicType(const std::string &name, const std::vector<Type *> &types_) : Type(name, true), types(types_) {}
};
} // namespace Sand::Types
