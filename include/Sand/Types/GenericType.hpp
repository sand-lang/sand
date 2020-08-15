#pragma once

#include <Sand/Generic.hpp>
#include <Sand/Type.hpp>
#include <Sand/Values/Constant.hpp>

#include <llvm/IR/IRBuilder.h>

namespace Sand::Types
{
class GenericType : public Name
{
public:
    std::shared_ptr<Scope> scope = nullptr;
    std::vector<Generic *> generics;

    GenericType(const std::shared_ptr<Scope> &scope_, const std::string &name, const std::vector<Generic *> &generics_) : Name(name), scope(scope_), generics(generics_)
    {
    }

    static bool are_same_generics(const std::vector<Name *> a, const std::vector<Name *> b)
    {
        if (a.size() != b.size())
            return false;

        for (size_t i = 0; i < a.size(); i++)
        {
            if (auto type_a = dynamic_cast<Type *>(a[i]))
            {
                if (auto type_b = dynamic_cast<Type *>(b[i]))
                {
                    if (!type_a->equals(type_b))
                    {
                        return false;
                    }
                }
                else
                {
                    return false;
                }
            }

            if (auto value_a = dynamic_cast<Values::Constant *>(a[i]))
            {
                if (auto value_b = dynamic_cast<Values::Constant *>(b[i]))
                {
                    if (Values::Constant::fold_not_equal(value_a, value_b)->get_ref()->getUniqueInteger().getBoolValue())
                    {
                        return false;
                    }
                }
                else
                {
                    return false;
                }
            }
        }

        return true;
    }
};
} // namespace Sand::Types
