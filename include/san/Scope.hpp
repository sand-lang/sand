#pragma once

#include <san/Type.hpp>
#include <san/Variable.hpp>

#include <llvm/IR/IRBuilder.h>

#include <map>
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
    std::unordered_map<std::string, Type *> types;

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

    Variable *get_var(const std::string &name)
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

    Type *get_type(const std::string &name, const std::vector<Type *> &generics)
    {
        auto primary_type = this->get_primary_type(name);

        if (primary_type)
        {
            return new Type(primary_type);
        }

        auto type = this->types[name];

        if (type)
        {
            return type;
        }

        if (this->parent)
        {
            return this->parent->get_type(name, generics);
        }

        return nullptr;
    }

    inline Type *get_type(const std::string &name)
    {
        return this->get_type(name, {});
    }

    inline bool is_root() const
    {
        return parent == nullptr;
    }

private:
    llvm::Type *get_primary_type(const std::string &name) const
    {
        if (name == "void")
        {
            return llvm::Type::getVoidTy(this->llvm_context);
        }
        else if (name == "bool" || name == "i1")
        {
            return llvm::Type::getInt1Ty(this->llvm_context);
        }
        else if (name == "i8" || name == "u8")
        {
            return llvm::Type::getInt8Ty(this->llvm_context);
        }
        else if (name == "i16" || name == "u16")
        {
            return llvm::Type::getInt16Ty(this->llvm_context);
        }
        else if (name == "i32" || name == "u32")
        {
            return llvm::Type::getInt32Ty(this->llvm_context);
        }
        else if (name == "i64" || name == "u64")
        {
            return llvm::Type::getInt64Ty(this->llvm_context);
        }
        else if (name == "f32")
        {
            return llvm::Type::getFloatTy(this->llvm_context);
        }
        else if (name == "f64")
        {
            return llvm::Type::getDoubleTy(this->llvm_context);
        }

        return nullptr;
    }
};
} // namespace San
