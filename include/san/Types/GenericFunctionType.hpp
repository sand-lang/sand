#pragma once

#include <san/Types/ClassType.hpp>
#include <san/Types/GenericType.hpp>
#include <san/Values/Function.hpp>

namespace San::Types
{
class GenericFunctionType : public GenericType
{
public:
    SanParser::FunctionContext *context = nullptr;
    Scope *scope = nullptr;

    ClassType *parent = nullptr;

    std::vector<Values::Function *> children;

    GenericFunctionType(Scope *scope_,
                        const std::string &name,
                        const std::vector<Generic *> &generics,
                        ClassType *parent_ = nullptr)
        : GenericType(name, generics),
          scope(scope_),
          parent(parent_) {}

    Values::Function *get_child(const std::vector<Type *> generics)
    {
        for (auto &child : this->children)
        {
            if (GenericType::are_same_generics(child->get_type()->generics, generics))
            {
                return child;
            }
        }

        return nullptr;
    }
};
} // namespace San::Types
