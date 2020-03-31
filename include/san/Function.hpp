#pragma once

#include <san/Block.hpp>
#include <san/Scope.hpp>
#include <san/Type.hpp>
#include <san/Variable.hpp>

#include <llvm/IR/IRBuilder.h>

#include <memory>

namespace San
{
class Function : public Variable
{
public:
    Type *return_type = nullptr;
    llvm::Function *ref = nullptr;

    std::unordered_map<std::string, Type *> args;

    Block *entry = nullptr;

    llvm::BasicBlock *return_label = nullptr;
    llvm::AllocaInst *return_value = nullptr;

    Function(std::shared_ptr<Scope> &scope,
             Type *return_type_,
             const std::unordered_map<std::string, Type *> &args_,
             const std::string &name_ = "",
             const llvm::GlobalValue::LinkageTypes &linkage = llvm::GlobalValue::LinkageTypes::ExternalLinkage)
        : return_type(return_type_),
          args(args_)
    {
        std::vector<llvm::Type *> types;

        for (const auto &[name, type] : this->args)
        {
            types.push_back(type->ref);
        }

        llvm::FunctionType *function_type = llvm::FunctionType::get(return_type->ref, types, false);

        this->type = new Type(function_type);

        this->ref = llvm::Function::Create(function_type, linkage, name_.c_str(), scope->module.get());
        this->value = this->ref;
    }

    virtual ~Function() {}
};
} // namespace San
