#pragma once

#include <san/ClassType.hpp>
#include <san/Type.hpp>
#include <san/Variable.hpp>

#include <llvm/IR/IRBuilder.h>

#include <map>
#include <memory>
#include <string>
#include <unordered_map>

namespace San
{
class Function;

class Scope
{
private:
    bool _is_loop = false;

public:
    llvm::LLVMContext &llvm_context;
    llvm::IRBuilder<> &builder;
    std::unique_ptr<llvm::Module> &module;

    std::shared_ptr<Scope> parent = nullptr;

    std::unordered_map<std::string, Variable *> variables;
    std::unordered_map<std::string, Type *> types;

    std::unordered_map<std::string, std::shared_ptr<Scope>> namespaces;

    Function *function = nullptr;

    llvm::BasicBlock *loop_end_label = nullptr;

    Scope(llvm::LLVMContext &llvm_context_,
          llvm::IRBuilder<> &builder_,
          std::unique_ptr<llvm::Module> &module_,
          Function *function_ = nullptr)
        : llvm_context(llvm_context_),
          builder(builder_),
          module(module_),
          function(function_) {}

    Scope(std::shared_ptr<Scope> parent_, Function *function = nullptr) : Scope(parent_->llvm_context,
                                                                                parent_->builder,
                                                                                parent_->module,
                                                                                (function != nullptr ? function : parent_->function))
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

    Type *add_type(Type *type, const std::string &name = "")
    {
        const auto pair = std::pair(name, type);
        this->types.insert(pair);

        return type;
    }

    std::shared_ptr<Scope> add_namespace(std::shared_ptr<Scope> scope, const std::string &name)
    {
        const auto pair = std::make_pair(name, scope);
        this->namespaces.insert(pair);

        return scope;
    }

    std::shared_ptr<Scope> &get_namespace(const std::string &name)
    {
        if (this->namespaces.find(name) != this->namespaces.end())
        {
            if (auto &scope = this->namespaces.at(name))
            {
                return scope;
            }
        }

        if (!this->is_root())
        {
            return this->parent->get_namespace(name);
        }

        throw std::out_of_range("Undefined namespace " + name);
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

    Type *get_type(const std::string &name, const std::vector<Type *> &generics = {})
    {
        if (auto primary_type = this->get_primary_type(name))
        {
            return primary_type;
        }

        if (auto type = this->types[name])
        {
            if (auto class_type = dynamic_cast<ClassType *>(type))
            {
                return class_type;
            }

            return type;
        }

        if (this->parent)
        {
            return this->parent->get_type(name, generics);
        }

        return nullptr;
    }

    inline bool is_root() const
    {
        return parent == nullptr;
    }

    bool is_loop() const
    {
        if (!this->_is_loop && !this->is_root())
        {
            return this->parent->is_loop();
        }

        return this->_is_loop;
    }

    llvm::BasicBlock *get_loop_end_label()
    {
        auto label = this->loop_end_label;

        if (!label && !this->is_root())
        {
            return this->parent->get_loop_end_label();
        }

        return label;
    }

    inline void is_loop(const bool &value)
    {
        this->_is_loop = value;
    }

private:
    Type *get_primary_type(const std::string &name) const
    {
        llvm::Type *ref = nullptr;
        bool is_signed = true;

        if (name == "void")
        {
            ref = llvm::Type::getVoidTy(this->llvm_context);
        }
        else if (name == "bool" || name == "i1")
        {
            ref = llvm::Type::getInt1Ty(this->llvm_context);
        }
        else if (name == "i8" || name == "u8")
        {
            ref = llvm::Type::getInt8Ty(this->llvm_context);
        }
        else if (name == "i16" || name == "u16")
        {
            ref = llvm::Type::getInt16Ty(this->llvm_context);
        }
        else if (name == "i32" || name == "u32")
        {
            ref = llvm::Type::getInt32Ty(this->llvm_context);
        }
        else if (name == "i64" || name == "u64")
        {
            ref = llvm::Type::getInt64Ty(this->llvm_context);
        }
        else if (name == "f32")
        {
            ref = llvm::Type::getFloatTy(this->llvm_context);
        }
        else if (name == "f64")
        {
            ref = llvm::Type::getDoubleTy(this->llvm_context);
        }

        if (ref)
        {
            TypeQualifiers qualifiers;

            if (name == "u8" || name == "u16" || name == "u32" || name == "u64")
            {
                qualifiers.is_signed = false;
            }

            return new Type(ref, qualifiers);
        }

        return nullptr;
    }
};
} // namespace San
