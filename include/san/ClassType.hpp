#pragma once

#include <san/Type.hpp>

#include <llvm/IR/IRBuilder.h>

#include <vector>

namespace San
{
class ClassType : public Type
{
public:
    bool accept_generics = false;
    std::vector<Type *> generics;

    std::vector<std::pair<std::string, Type *>> properties;

    ClassType(llvm::Type *ref_,
              const std::vector<Type *> &generics_ = {},
              const std::vector<std::pair<std::string, Type *>> &properties_ = {}) : Type(ref_, {}, true),
                                                                                     accept_generics(true),
                                                                                     generics(generics_),
                                                                                     properties(properties_) {}

    size_t size() const;

    void add_property(std::string name, Type *type)
    {
        this->properties.push_back(std::pair(name, type));
    }

    llvm::StructType *get_struct()
    {
        return reinterpret_cast<llvm::StructType *>(this->ref);
    }
};
} // namespace San
