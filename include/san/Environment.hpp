#pragma once

#include <san/Debugger.hpp>

#include <llvm/IR/IRBuilder.h>

namespace San
{
class Environment
{
public:
    llvm::LLVMContext llvm_context;
    llvm::IRBuilder<> builder;
    std::unique_ptr<llvm::Module> module;

    Debugger debugger;

    Environment(std::string name) : builder(this->llvm_context),
                                    module(std::make_unique<llvm::Module>(name, this->llvm_context)) {}
};
} // namespace San
