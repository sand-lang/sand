#pragma once

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

    bool accept_generics = false;
    std::vector<Type *> generics;

    TypeQualifiers qualifiers;

    Type(llvm::Type *ref_ = nullptr, const TypeQualifiers &qualifiers_ = TypeQualifiers()) : ref(ref_), qualifiers(qualifiers_) {}

    Type(llvm::Type *ref_,
         const std::vector<Type *> &generics_,
         const TypeQualifiers &qualifiers_ = TypeQualifiers()) : ref(ref_),
                                                                 accept_generics(true),
                                                                 generics(generics_),
                                                                 qualifiers(qualifiers_) {}

    inline bool is_integer() const
    {
        return this->ref->isIntegerTy();
    }

    inline bool is_function() const
    {
        return this->ref->isFunctionTy();
    }
};
} // namespace San
