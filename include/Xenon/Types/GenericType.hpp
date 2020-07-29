#pragma once

#include <Xenon/Type.hpp>

#include <llvm/IR/IRBuilder.h>

namespace Xenon::Types
{
struct Generic
{
    std::string name;
    Type *default_type;

    Generic(const std::string &name_, Type *default_type_) : name(name_), default_type(default_type_) {}
};

class GenericType : public Name
{
public:
    std::vector<Generic *> generics;

    GenericType(const std::string &name, const std::vector<Generic *> &generics_) : Name(name), generics(generics_)
    {
    }

    static bool are_same_generics(const std::vector<Type *> a, const std::vector<Type *> b)
    {
        if (a.size() != b.size())
            return false;

        for (size_t i = 0; i < a.size(); i++)
        {
            if (!a[i]->equals(b[i]))
            {
                return false;
            }
        }

        return true;
    }
};
} // namespace Xenon::Types
