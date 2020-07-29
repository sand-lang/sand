#pragma once

#include <Xenon/Types/ClassType.hpp>
#include <Xenon/Types/GenericType.hpp>
#include <Xenon/Values/Function.hpp>

namespace Xenon::Types
{
class GenericFunctionType : public GenericType
{
public:
    XenonParser::FunctionContext *context = nullptr;
    std::shared_ptr<Scope> scope = nullptr;

    ClassType *parent = nullptr;

    std::vector<Values::Function *> children;

    GenericFunctionType(std::shared_ptr<Scope> scope_,
                        const std::string &name,
                        const std::vector<Generic *> &generics,
                        ClassType *parent_ = nullptr)
        : GenericType(name, generics),
          scope(scope_),
          parent(parent_) {}

    Values::Function *get_child(const std::vector<Type *> generics)
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
} // namespace Xenon::Types
