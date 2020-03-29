#pragma once

#include <san/Scope.hpp>

#include <llvm/IR/IRBuilder.h>

namespace San
{
class Environment
{
public:
    llvm::LLVMContext llvm_context;
    llvm::IRBuilder<> builder;
    std::unique_ptr<llvm::Module> module;

    std::shared_ptr<Scope> scope = nullptr;

    Environment(std::string name) : builder(this->llvm_context),
                                    module(std::make_unique<llvm::Module>(name, this->llvm_context)),
                                    scope(std::make_shared<Scope>(this->llvm_context, this->builder, this->module)) {}
};
} // namespace San
