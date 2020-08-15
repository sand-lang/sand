#pragma once

#include <Sand/Types/ClassType.hpp>
#include <Sand/Types/GenericType.hpp>
#include <Sand/Values/Function.hpp>

namespace Sand::Types
{
class GenericFunctionType : public GenericType
{
public:
    SandParser::FunctionContext *context = nullptr;

    ClassType *parent = nullptr;

    std::vector<Values::Function *> children;

    GenericFunctionType(std::shared_ptr<Scope> scope,
                        const std::string &name,
                        const std::vector<Generic *> &generics,
                        ClassType *parent_ = nullptr)
        : GenericType(scope, name, generics),
          parent(parent_) {}

    Values::Function *get_child(const std::vector<Name *> generics)
    {
        for (auto it = this->children.rbegin(); it != this->children.rend(); it++)
        {
            auto &child = *it;

            if (GenericType::are_same_generics(child->get_type()->generics, generics))
            {
                return child;
            }
        }

        return nullptr;
    }
};
} // namespace Sand::Types
