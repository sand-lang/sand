#include <Sand/Value.hpp>

#include <Sand/Values/Variable.hpp>

#include <Sand/Types/FunctionType.hpp>

using namespace Sand;

Value *Value::call(llvm::IRBuilder<> &builder, std::unique_ptr<llvm::Module> &module, std::vector<Value *> args)
{
    auto called_type = this->type;

    if (called_type->is_pointer())
    {
        called_type = called_type->base;
    }

    auto type = dynamic_cast<Types::FunctionType *>(called_type);

    std::vector<llvm::Value *> llvm_args;

    if (this->calling_variable != nullptr)
    {
        llvm_args.push_back(this->calling_variable->get_ref());
    }

    size_t start = type->is_method ? 1 : 0;
    for (size_t i = 0; i < args.size(); i++)
    {
        auto arg = args[i];

        auto not_variadic = i <= (type->args.size() - (type->is_variadic ? 1 : 0) - start);

        if (not_variadic)
        {
            auto function_arg = type->args[i + start];

            if (function_arg.type->is_reference && !Type::equals((arg->is_alloca && !arg->is_temporary) ? Type::reference(arg->type) : arg->type, function_arg.type))
            {
                auto reference = Values::Variable::create("ref", function_arg.type->base, builder);
                reference->store(arg, builder, module);

                arg = reference;
            }

            auto casted = arg->cast(function_arg.type, builder);
            llvm_args.push_back(casted->get_ref());
        }
        else
        {
            auto value = arg->load_alloca_and_reference(builder);
            llvm_args.push_back(value->get_ref());
        }
    }

    if (type->is_sret)
    {
        auto tmp = Values::Variable::create("tmp", type->return_type, builder);
        tmp->can_be_taken = true;
        tmp->is_temporary = true;

        llvm_args.insert(llvm_args.begin(), tmp->get_ref());

        auto call = builder.CreateCall(type->get_ref(), this->get_ref(), llvm_args);
        call->addAttribute(1, llvm::Attribute::StructRet);

        return tmp;
    }
    else
    {
        auto ret = builder.CreateCall(type->get_ref(), this->get_ref(), llvm_args);
        return new Value("call", type->return_type, static_cast<llvm::Value *>(ret));
    }
}
