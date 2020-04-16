#pragma once

#include <llvm/IR/Type.h>
#include <llvm/IR/Value.h>

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
    bool is_struct = false;

    Type *base = nullptr;

    Type(llvm::Type *ref_ = nullptr, const TypeQualifiers &qualifiers_ = TypeQualifiers(), const bool is_struct_ = false) : ref(ref_), qualifiers(qualifiers_), is_struct(is_struct_) {}

    virtual ~Type() {}

    size_t size() const;

    Type *pointer()
    {
        auto llvm_type = reinterpret_cast<llvm::Type *>(this->ref->getPointerTo());

        auto type = new Type(llvm_type, this->qualifiers);
        type->base = this;

        return type;
    }

    inline bool is_integer() const
    {
        return this->ref->isIntegerTy();
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
};
} // namespace San
