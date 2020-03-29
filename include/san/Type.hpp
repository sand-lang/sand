#pragma once

#include <llvm/IR/Value.h>

#include <string>
#include <vector>

namespace San
{
class Type
{
public:
    bool accept_generics = false;
    std::vector<Type *> generics;

    llvm::Type *ref = nullptr;

    Type(llvm::Type *ref_ = nullptr) : ref(ref_) {}
    Type(const std::vector<Type *> &generics_, llvm::Type *ref_ = nullptr) : accept_generics(true), generics(generics_), ref(ref_) {}

    inline bool is_integer() const
    {
        return this->ref->isIntegerTy();
    }
};
} // namespace San
