#pragma once

#include <Sand/Name.hpp>
#include <Sand/Scope.hpp>

#include <llvm/IR/IRBuilder.h>

namespace Sand
{
class Namespace : public Name
{
public:
    std::shared_ptr<Scope> scope = nullptr;

    Namespace(const std::string &name, std::shared_ptr<Scope> &scope_) : Name(name), scope(scope_) {}
};
} // namespace Sand
