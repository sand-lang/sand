#pragma once

#include <grammar/runtime/SanParser.h>

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
    bool is_base = false;
    std::shared_ptr<Scope> scope;

    std::vector<std::pair<std::string, Type *>> generics;
    ClassType *this_type = nullptr;

    std::vector<Function *> generated_generics;
    SanParser::FunctionContext *context = nullptr;

    Type *return_type = nullptr;
    llvm::Function *ref = nullptr;

    std::vector<std::pair<std::string, Type *>> args;
    bool is_variadic = false;

    Block *entry = nullptr;

    llvm::BasicBlock *return_label = nullptr;
    Variable *return_value = nullptr;

    bool is_sret = false;

    Function(std::shared_ptr<Scope> &scope,
             std::unique_ptr<llvm::Module> &module,
             Type *return_type_,
             const std::vector<std::pair<std::string, Type *>> &args_,
             const bool &is_variadic_ = false,
             const std::string &name_ = "",
             const llvm::GlobalValue::LinkageTypes &linkage = llvm::GlobalValue::LinkageTypes::PrivateLinkage)
        : return_type(return_type_),
          args(args_),
          is_variadic(is_variadic_)
    {
        std::vector<llvm::Type *> types;

        const auto return_type_size = this->return_type->size(module);

        if (return_type_size > 8)
        {
            this->is_sret = true;
        }

        auto function_return_type = return_type->ref;

        if (this->is_sret)
        {
            if (this->return_type->is_pointer())
            {
                types.push_back(this->return_type->ref);
            }
            else
            {
                types.push_back(this->return_type->pointer()->ref);
            }

            function_return_type = llvm::Type::getVoidTy(scope->builder.getContext());
        }

        for (const auto &[name, type] : this->args)
        {
            types.push_back(type->ref);
        }

        llvm::FunctionType *function_type = llvm::FunctionType::get(function_return_type, types, this->is_variadic);

        this->type = new Type(function_type);

        this->ref = llvm::Function::Create(function_type, linkage, name_.c_str(), scope->module.get());

        if (this->is_sret)
        {
            this->ref->addAttribute(1, llvm::Attribute::NoAlias);
            this->ref->addAttribute(1, llvm::Attribute::StructRet);
        }

        if (this->return_type->is_reference())
        {
            this->ref->addDereferenceableAttr(this->is_sret ? 1 : 0, return_type_size);
        }

        this->value = this->ref;
    }

    Function(const std::vector<std::string> &generics,
             std::shared_ptr<Scope> &scope_,
             SanParser::FunctionContext *context_) : is_base(true),
                                                     scope(scope_),
                                                     context(context_)
    {
        for (const auto &name : generics)
        {
            this->generics.push_back(std::make_pair(name, nullptr));
        }
    }

    Function(Type *type,
             llvm::Value *value,
             const VariableValueType &value_type = VariableValueType::Simple) : Variable(type, value, value_type)
    {
        this->return_type = type->base->return_type;
        this->is_sret = type->base->is_sret;
        this->is_variadic = type->base->is_sret;

        for (const auto &arg : type->base->args)
        {
            this->args.push_back(std::make_pair("", arg));
        }
    }

    virtual ~Function() {}

    Function *get_generated(const std::vector<Type *> &generics) const
    {
        for (auto &generated : this->generated_generics)
        {
            bool same = true;

            for (size_t i = 0; i < generated->generics.size(); i++)
            {
                auto &[name, type] = generated->generics[i];

                if (!generics[i]->equals(type))
                {
                    same = false;
                    break;
                }
            }

            if (same)
            {
                return generated;
            }
        }

        return nullptr;
    }

    void insert(Block *block)
    {
        block->bb->insertInto(this->ref);
    }
};
} // namespace San
