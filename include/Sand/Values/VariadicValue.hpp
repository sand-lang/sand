#pragma once

#include <Sand/Value.hpp>

#include <llvm/IR/IRBuilder.h>

namespace Sand::Values
{
class VariadicValue : public Value
{
public:
    std::vector<Value *> values;

    VariadicValue(const std::string &name, const std::vector<Value *> &values_) : Value(name, true), values(values_) {}
};
} // namespace Sand::Values
