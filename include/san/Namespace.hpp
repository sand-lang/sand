#pragma once

#include <san/Name.hpp>
#include <san/Scope.hpp>

#include <llvm/IR/IRBuilder.h>

namespace San
{
class Namespace : public Name
{
public:
    Scope *scope = nullptr;

    Namespace(const std::string &name, Scope *scope_) : Name(name), scope(scope_) {}
};
} // namespace San
