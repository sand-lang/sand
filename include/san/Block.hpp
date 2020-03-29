#pragma once

#include <san/Scope.hpp>

namespace San
{
class Block
{
public:
    std::shared_ptr<Scope> scope = nullptr;
    llvm::BasicBlock *bb = nullptr;

    Block(std::shared_ptr<Scope> scope_, const std::string &name = "", llvm::Function *function = nullptr) : scope(scope_)
    {
        this->bb = llvm::BasicBlock::Create(this->scope->llvm_context, name, function);
    }

    inline Block(std::shared_ptr<Scope> scope_, llvm::Function *function) : Block(scope_, (function == nullptr ? "" : "entry"), function) {}
};
} // namespace San
