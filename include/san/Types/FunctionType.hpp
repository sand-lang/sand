#pragma once

#include <san/Type.hpp>
#include <san/Values/Constant.hpp>

#include <llvm/IR/IRBuilder.h>

#include <vector>

namespace San::Types
{
struct FunctionArgument
{
    std::string name;
    Type *type;
    Values::Constant *default_value = nullptr;

    FunctionArgument(const std::string &name_, Type *type_, Values::Constant *default_value_ = nullptr) : name(name_), type(type_), default_value(default_value_) {}
};

class FunctionType : public Type
{
public:
    Type *return_type = nullptr;
    std::vector<FunctionArgument> args;
    bool is_variadic = false;
    bool is_sret = false;
    bool is_method = false;

    std::vector<Type *> generics;

    FunctionType(const std::string &name,
                 llvm::FunctionType *ref,
                 Type *return_type_,
                 const std::vector<FunctionArgument> &args_,
                 const bool &is_variadic_ = false,
                 const bool &is_sret_ = false,
                 const bool &is_method_ = false) : Type(name, ref),
                                                   return_type(return_type_),
                                                   args(args_),
                                                   is_variadic(is_variadic_),
                                                   is_sret(is_sret_),
                                                   is_method(is_method_) {}

    static FunctionType *create(llvm::IRBuilder<> &builder, std::unique_ptr<llvm::Module> &module, const std::string &name, Type *return_type, const std::vector<FunctionArgument> &args, const bool &is_variadic = false, const bool &is_method = false)
    {
        auto return_llvm_type = return_type->get_ref();
        std::vector<llvm::Type *> argument_llvm_types;

        auto return_type_size = return_type->size(module);

        auto is_sret = return_type->is_struct() || (return_type_size > 8);

        if (is_sret)
        {
            if (return_type->is_pointer())
            {
                argument_llvm_types.push_back(return_type->get_ref());
            }
            else
            {
                argument_llvm_types.push_back(return_type->pointer()->get_ref());
            }

            return_llvm_type = Type::llvm_void(builder.getContext());
        }

        for (const auto &arg : args)
        {
            argument_llvm_types.push_back(arg.type->get_ref());
        }

        auto ref = llvm::FunctionType::get(return_llvm_type, argument_llvm_types, is_variadic);
        return new FunctionType(name, ref, return_type, args, is_variadic, is_sret, is_method);
    }

    llvm::FunctionType *get_ref()
    {
        return llvm::cast<llvm::FunctionType>(this->ref);
    }

    bool compare_args(const std::vector<Value *> args) const
    {
        std::vector<Type *> args_types;

        for (auto &arg : args)
        {
            args_types.push_back(arg->type);
        }

        return this->compare_args(args_types);
    }

    bool compare_args(const std::vector<Type *> args) const
    {
        // `this` is automatically passed as arguments, it should not be in the comparison
        size_t start = (this->is_method ? 1 : 0);

        if (this->is_variadic)
        {
            if (args.size() < this->args.size())
            {
                return false;
            }
        }
        else if (args.size() != (this->args.size() - start))
        {
            return false;
        }

        for (size_t i = start; i < this->args.size(); i++)
        {
            if (!this->args[i].type->equals(args[i - start]))
            {
                return false;
            }
        }

        return true;
    }
};
} // namespace San::Types
