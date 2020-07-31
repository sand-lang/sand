#pragma once

#include <Sand/Name.hpp>
#include <Sand/StatementStatus.hpp>
#include <Sand/Value.hpp>

#include <llvm/IR/IRBuilder.h>

#include <string>

namespace Sand
{
class Block : public Name
{
public:
    llvm::BasicBlock *ref = nullptr;

    StatementStatus status = StatementStatus::None;

    Block(const std::string &name, llvm::BasicBlock *ref_) : Name(name), ref(ref_) {}

    static Block *create(llvm::IRBuilder<> &builder, const std::string &name = "")
    {
        auto ref = llvm::BasicBlock::Create(builder.getContext(), name);
        return new Block(name, ref);
    }

    void set_name(const std::string &name)
    {
        this->name = name;
        this->ref->setName(name);
    }

    llvm::BasicBlock *get_ref() const
    {
        return this->ref;
    }

    void insert_point(llvm::IRBuilder<> &builder)
    {
        builder.SetInsertPoint(this->ref);
    }

    void br(llvm::IRBuilder<> &builder)
    {
        builder.CreateBr(this->ref);
    }

    void conditional_br(llvm::IRBuilder<> &builder, Value *value, Block *false_block)
    {
        builder.CreateCondBr(value->get_ref(), this->get_ref(), false_block->get_ref());
    }
};
} // namespace Sand
