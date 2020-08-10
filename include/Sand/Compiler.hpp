#pragma once

#include <llvm/IR/IRBuilder.h>
#include <llvm/Passes/PassBuilder.h>
#include <llvm/Target/TargetMachine.h>

#include <memory>
#include <string>
#include <vector>

namespace Sand
{
class Compiler
{
private:
    std::unique_ptr<llvm::Module> &module;
    llvm::TargetMachine *target_machine = nullptr;

public:
    Compiler(std::unique_ptr<llvm::Module> &module_, llvm::TargetMachine *target_machine_) : module(module_), target_machine(target_machine_) {}

    std::vector<std::string> generate_objects(const std::string &os, const std::string &arch, const llvm::PassBuilder::OptimizationLevel &optimization_level, const bool &verbose);
};
} // namespace Sand
