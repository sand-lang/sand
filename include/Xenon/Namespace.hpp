#pragma once

#include <Xenon/Name.hpp>
#include <Xenon/Scope.hpp>

#include <llvm/IR/IRBuilder.h>

namespace Xenon
{
class Namespace : public Name
{
public:
    std::shared_ptr<Scope> scope = nullptr;

    Namespace(const std::string &name, std::shared_ptr<Scope> &scope_) : Name(name), scope(scope_) {}
};
} // namespace Xenon
