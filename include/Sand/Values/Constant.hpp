#pragma once

#include <Sand/Value.hpp>

#include <llvm/IR/IRBuilder.h>

namespace Sand::Values
{
class Constant : public Value
{
public:
    llvm::GlobalVariable *global = nullptr;

    Constant(const std::string &name, Type *type, llvm::Constant *ref, const bool &is_alloca = false) : Value(name, type, ref, is_alloca)
    {
    }

    static Constant *null_value(Type *type)
    {
        auto value = type->default_value();
        return new Values::Constant("null_" + type->name, type, value);
    }

    static Constant *boolean_value(const bool &boolean, llvm::LLVMContext &context)
    {
        auto type = Type::i1(context);
        auto value = llvm::ConstantInt::get(type->get_ref(), boolean, false);

        return new Values::Constant(boolean ? "true" : "false", type, value);
    }

    virtual llvm::Constant *get_ref() const override
    {
        return llvm::cast<llvm::Constant>(this->ref);
    }

    Constant *cast(Type *dest, llvm::IRBuilder<> &builder, std::unique_ptr<llvm::Module> &module, const bool &load = true) override
    {
        auto ref = this->get_ref();

        if (dest->is_reference)
        {
            dest = dest->base;
        }

        if (type->is_integer())
        {
            if (dest->is_integer())
            {
                auto lbits = dest->ref->getIntegerBitWidth();
                auto rbits = type->ref->getIntegerBitWidth();

                auto is_signed = type->is_signed;

                if (lbits > rbits)
                {
                    if (is_signed)
                    {
                        ref = llvm::ConstantExpr::getSExt(ref, dest->get_ref());
                    }
                    else
                    {
                        ref = llvm::ConstantExpr::getZExt(ref, dest->get_ref());
                    }
                }
                else if (lbits < rbits)
                {
                    ref = llvm::ConstantExpr::getTrunc(ref, dest->get_ref());
                }
            }
            else if (dest->is_boolean())
            {
                // ref = builder.CreateICmpNE(ref, llvm::ConstantInt::get(ref->getType(), 0));
            }
            else if (dest->is_floating_point())
            {
                if (type->is_signed)
                {
                    ref = llvm::ConstantExpr::getSIToFP(ref, dest->get_ref());
                }
                else
                {
                    ref = llvm::ConstantExpr::getUIToFP(ref, dest->get_ref());
                }
            }
            else if (dest->is_pointer())
            {
                ref = llvm::ConstantExpr::getIntToPtr(ref, dest->get_ref());
            }

            return new Constant(this->name, dest, ref);
        }
        else if (type->is_double())
        {
            if (dest->is_float())
            {
                ref = llvm::ConstantExpr::getFPTrunc(ref, dest->get_ref());
            }
            else if (dest->is_integer())
            {
                if (dest->is_signed)
                {
                    ref = llvm::ConstantExpr::getFPToSI(ref, dest->get_ref());
                }
                else
                {
                    ref = llvm::ConstantExpr::getFPToUI(ref, dest->get_ref());
                }
            }

            return new Constant(this->name, dest, ref);
        }
        else if (type->is_float())
        {
            if (dest->is_double())
            {
                ref = llvm::ConstantExpr::getFPExtend(ref, dest->get_ref());
            }
            else if (dest->is_integer())
            {
                if (dest->is_signed)
                {
                    ref = llvm::ConstantExpr::getFPToSI(ref, dest->get_ref());
                }
                else
                {
                    ref = llvm::ConstantExpr::getFPToUI(ref, dest->get_ref());
                }
            }

            return new Constant(this->name, dest, ref);
        }
        else if (type->is_pointer())
        {
            if (dest->is_boolean())
            {
                // auto pointer_type = reinterpret_cast<llvm::PointerType *>(type->ref);
                // ref = builder.CreateICmpNE(ref, llvm::ConstantPointerNull::get(pointer_type));
            }
            else if (dest->is_integer())
            {
                ref = llvm::ConstantExpr::getPtrToInt(ref, dest->get_ref());
            }
            else if (dest->is_pointer())
            {
                ref = llvm::ConstantExpr::getBitCast(ref, dest->get_ref());
            }

            return new Constant(this->name, dest, ref);
        }
        else if (type->is_array())
        {
            if (dest->is_pointer())
            {
                auto zero = llvm::ConstantInt::get(Type::llvm_i64(builder.getContext()), 0);
                ref = llvm::cast<llvm::Constant>(builder.CreateConstInBoundsGEP2_64(ref, 0, 0));
                return new Constant(this->name, dest, ref);
            }
        }

        return this;
    }

    static Constant *fold_equal(Constant *lvalue, Constant *rvalue);

    static Constant *fold_not_equal(Constant *lvalue, Constant *rvalue);
};
} // namespace Sand::Values
