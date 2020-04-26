#pragma once

#include <llvm/IR/IRBuilder.h>

#include <string>
#include <vector>

namespace San
{
struct TypeQualifiers
{
    bool is_signed = true;
    bool is_mutable = true;
};

class Type
{
public:
    llvm::Type *ref = nullptr;

    TypeQualifiers qualifiers;

    Type *base = nullptr;

    bool is_sret = false;
    std::vector<Type *> args;
    bool is_variadic = false;
    Type *return_type = nullptr;

private:
    bool _is_reference = false;

public:
    Type(llvm::Type *ref_ = nullptr, const TypeQualifiers &qualifiers_ = TypeQualifiers()) : ref(ref_), qualifiers(qualifiers_)
    {
    }

    virtual ~Type() {}

    size_t size(std::unique_ptr<llvm::Module> &module) const;

    Type *pointer()
    {
        auto llvm_type = reinterpret_cast<llvm::Type *>(this->ref->getPointerTo());

        auto type = new Type(llvm_type, this->qualifiers);
        type->base = this;

        return type;
    }

    llvm::Constant *default_value()
    {
        if (this->ref->isIntegerTy())
        {
            return llvm::ConstantInt::get(this->ref, 0);
        }

        return llvm::ConstantPointerNull::get(reinterpret_cast<llvm::PointerType *>(this->ref));
    }

    Type *get_base(const bool &root = true)
    {
        if (this->base == nullptr)
        {
            return this;
        }
        else if (!root)
        {
            return this->base;
        }

        return this->base->get_base();
    }

    const Type *get_base(const bool &root = true) const
    {
        if (this->base == nullptr)
        {
            return this;
        }
        else if (!root)
        {
            return this->base;
        }

        return this->base->get_base();
    }

    inline bool is_void() const
    {
        return this->ref->isVoidTy();
    }

    inline bool is_integer() const
    {
        return this->ref->isIntegerTy();
    }

    inline bool is_double() const
    {
        return this->ref->isDoubleTy();
    }

    inline bool is_float() const
    {
        return this->ref->isFloatTy();
    }

    inline bool is_floating_point() const
    {
        return this->ref->isFloatingPointTy();
    }

    inline bool is_pointer() const
    {
        return this->ref->isPointerTy();
    }

    inline bool is_function() const
    {
        return this->ref->isFunctionTy();
    }

    inline bool is_boolean() const
    {
        return this->ref->isIntegerTy(1);
    }

    inline bool is_struct() const
    {
        return this->ref->isStructTy();
    }

    inline bool is_reference() const
    {
        return this->_is_reference;
    }

    inline void set_is_reference(const bool &is_reference)
    {
        this->_is_reference = is_reference;
    }

    inline bool equals(const Type *right) const
    {
        return Type::equals(this, right);
    }

    static bool equals(const Type *left, const Type *right)
    {
        return Type::equals(left->ref, right->ref);
    }

    static bool equals(const llvm::Type *left, const llvm::Type *right)
    {
        auto left_ptr = llvm::dyn_cast<llvm::PointerType>(left);
        auto right_ptr = llvm::dyn_cast<llvm::PointerType>(right);

        if (left == right)
            return true;

        if (left->getTypeID() == right->getTypeID())
            return true;

        switch (left->getTypeID())
        {
        case llvm::Type::IntegerTyID:
            return llvm::cast<llvm::IntegerType>(left)->getBitWidth() == llvm::cast<llvm::IntegerType>(right)->getBitWidth();

        // left == right would have returned true earlier, because types are uniqued.
        case llvm::Type::VoidTyID:
        case llvm::Type::FloatTyID:
        case llvm::Type::DoubleTyID:
        case llvm::Type::X86_FP80TyID:
        case llvm::Type::FP128TyID:
        case llvm::Type::PPC_FP128TyID:
        case llvm::Type::LabelTyID:
        case llvm::Type::MetadataTyID:
        case llvm::Type::TokenTyID:
            return true;

        case llvm::Type::PointerTyID:
            assert(left_ptr && right_ptr && "Both types must be pointers here.");
            return left_ptr->getAddressSpace() == right_ptr->getAddressSpace();

        case llvm::Type::StructTyID:
        {
            auto left_struct = llvm::cast<llvm::StructType>(left);
            auto right_struct = llvm::cast<llvm::StructType>(right);

            if (left_struct->getNumElements() != right_struct->getNumElements())
                return false;

            if (left_struct->isPacked() != right_struct->isPacked())
                return false;

            for (unsigned i = 0, e = left_struct->getNumElements(); i != e; ++i)
            {
                if (!Type::equals(left_struct->getElementType(i), right_struct->getElementType(i)))
                    return false;
            }

            return true;
        }

        case llvm::Type::FunctionTyID:
        {
            auto left_function = llvm::cast<llvm::FunctionType>(left);
            auto right_function = llvm::cast<llvm::FunctionType>(right);

            if (left_function->getNumParams() != right_function->getNumParams())
                return false;

            if (left_function->isVarArg() != right_function->isVarArg())
                return false;

            if (!Type::equals(left_function->getReturnType(), right_function->getReturnType()))
                return false;

            for (unsigned i = 0, e = left_function->getNumParams(); i != e; ++i)
            {
                if (!Type::equals(left_function->getParamType(i), right_function->getParamType(i)))
                    return false;
            }

            return true;
        }

        case llvm::Type::ArrayTyID:
        case llvm::Type::VectorTyID:
        {
            auto left_sequential = llvm::cast<llvm::SequentialType>(left);
            auto right_sequential = llvm::cast<llvm::SequentialType>(right);

            if (left_sequential->getNumElements() != right_sequential->getNumElements())
                return false;

            return Type::equals(left_sequential->getElementType(), right_sequential->getElementType());
        }

        default:
            return false;
        }
    }
};
} // namespace San
