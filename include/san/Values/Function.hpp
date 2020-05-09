#pragma once

#include <san/Block.hpp>
#include <san/Position.hpp>
#include <san/Value.hpp>
#include <san/Values/Variable.hpp>

#include <san/Types/FunctionType.hpp>

namespace San::Values
{
class Function : public Value
{
public:
    Block *entry_block = nullptr;
    Block *return_block = nullptr;

    Variable *return_value = nullptr;

    Function(std::unique_ptr<llvm::Module> &module, Types::FunctionType *type, const llvm::GlobalValue::LinkageTypes &linkage = llvm::GlobalValue::LinkageTypes::LinkOnceAnyLinkage) : Value(type->name, type, nullptr)
    {
        this->ref = llvm::Function::Create(type->get_ref(), linkage, type->name, module.get());
    }

    Types::FunctionType *get_type()
    {
        return static_cast<Types::FunctionType *>(this->type);
    }

    llvm::Function *get_ref() override
    {
        return llvm::cast<llvm::Function>(this->ref);
    }

    void insert(Block *block)
    {
        block->ref->insertInto(llvm::cast<llvm::Function>(this->ref));
    }
};
} // namespace San::Values
