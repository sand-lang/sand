#pragma once

#include <llvm/IR/IRBuilder.h>

namespace Xenon
{
struct Position
{
    llvm::BasicBlock *block = nullptr;
    llvm::BasicBlock::iterator position_in_block;

    Position(llvm::BasicBlock *block_, llvm::BasicBlock::iterator position_in_block_) : block(block_), position_in_block(position_in_block_) {}
    Position() {}

    static Position save(llvm::IRBuilder<> &builder)
    {
        return Position(builder.GetInsertBlock(), builder.GetInsertPoint());
    }

    void load(llvm::IRBuilder<> &builder)
    {
        if (block != nullptr)
        {
            builder.SetInsertPoint(this->block, this->position_in_block);
        }
    }
};
} // namespace Xenon
