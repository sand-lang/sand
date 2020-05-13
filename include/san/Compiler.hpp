#pragma once

#include <llvm/IR/IRBuilder.h>
#include <llvm/Passes/PassBuilder.h>

#include <memory>
#include <vector>

namespace San
{
class Compiler
{
private:
    std::unique_ptr<llvm::Module> &module;

public:
    Compiler(std::unique_ptr<llvm::Module> &module_) : module(module_) {}

    std::vector<std::string> generate_objects(const llvm::PassBuilder::OptimizationLevel &optimization_level);
};
} // namespace San
