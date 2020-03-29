#pragma once

#include <san/Block.hpp>
#include <san/Scope.hpp>
#include <san/Variable.hpp>

#include <llvm/IR/IRBuilder.h>

#include <memory>

namespace San
{
class Function : public Variable
{
public:
    llvm::Type *return_type = nullptr;
    llvm::Function *ref = nullptr;

    std::vector<llvm::Type *> args;

    Block *entry = nullptr;

    Function(std::shared_ptr<Scope> &scope,
             llvm::Type *return_type_,
             const std::vector<llvm::Type *> &args_,
             const std::string &name_ = "",
             const llvm::GlobalValue::LinkageTypes &linkage = llvm::GlobalValue::LinkageTypes::ExternalLinkage)
        : return_type(return_type_),
          args(args_)
    {
        llvm::FunctionType *function_type = llvm::FunctionType::get(return_type, args, false);

        this->type = function_type;

        this->ref = llvm::Function::Create(function_type, linkage, name_.c_str(), scope->module.get());
        this->value = this->ref;
    }
};
} // namespace San
