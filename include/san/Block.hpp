#pragma once

#include <san/Scope.hpp>

namespace San
{
class Block
{
public:
    std::shared_ptr<Scope> scope = nullptr;
    llvm::BasicBlock *bb = nullptr;

    bool has_returned = false;

    Block(std::shared_ptr<Scope> scope_, const std::string &name = "", llvm::Function *function = nullptr, bool direct_insert = true) : scope(scope_)
    {
        this->bb = llvm::BasicBlock::Create(this->scope->llvm_context, name, direct_insert ? function : nullptr);
    }

    inline Block(std::shared_ptr<Scope> scope_, llvm::Function *function, bool direct_insert = true) : Block(scope_, (function == nullptr ? "" : "entry"), function, direct_insert) {}
};
} // namespace San
