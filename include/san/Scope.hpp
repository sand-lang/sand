#pragma once

#include <san/Variable.hpp>

#include <llvm/IR/IRBuilder.h>

#include <string>

namespace San
{
class Scope
{
public:
    llvm::LLVMContext &llvm_context;
    llvm::IRBuilder<> &builder;
    std::unique_ptr<llvm::Module> &module;

    std::shared_ptr<Scope> parent = nullptr;

    std::unordered_map<std::string, Variable *> variables;

    Scope(llvm::LLVMContext &llvm_context_,
          llvm::IRBuilder<> &builder_,
          std::unique_ptr<llvm::Module> &module_)
        : llvm_context(llvm_context_),
          builder(builder_),
          module(module_) {}

    Scope(std::shared_ptr<Scope> parent_) : Scope(parent_->llvm_context, parent_->builder, parent_->module)
    {
        this->parent = parent_;
    }

    ~Scope()
    {
        for (auto &[key, value] : this->variables)
        {
            delete value;
            this->variables.erase(key);
        }
    }

    Variable *add(Variable *variable, const std::string &name = "")
    {
        const auto pair = std::pair(name.empty() ? std::to_string(this->variables_count()) : name, variable);
        this->variables.insert(pair);

        return variable;
    }

    inline Variable *get_var(const std::string &name)
    {
        auto it = this->variables.find(name);

        if (it != this->variables.end())
        {
            return it->second;
        }

        if (!this->is_root())
        {
            return this->parent->get_var(name);
        }

        return nullptr;
    }

    size_t variables_count() const
    {
        size_t count = this->variables.size();

        if (!this->is_root())
        {
            count += this->parent->variables_count();
        }

        return count;
    }

    inline bool is_root() const
    {
        return parent == nullptr;
    }
};
} // namespace San
