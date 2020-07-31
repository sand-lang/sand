#pragma once

#include <grammar/runtime/SandParser.h>

#include <Sand/Types/ClassType.hpp>
#include <Sand/Types/GenericType.hpp>

#include <Sand/Attributes.hpp>

namespace Sand::Types
{
class GenericClassType : public GenericType
{
public:
    SandParser::ClassStatementContext *context = nullptr;
    std::shared_ptr<Scope> scope = nullptr;

    std::vector<ClassType *> children;

    Attributes attributes;

    GenericClassType(const std::shared_ptr<Scope> &scope_, const std::string &name, const std::vector<Generic *> &generics, SandParser::ClassStatementContext *context_, const Attributes &attributes_) : GenericType(name, generics), context(context_), scope(scope_), attributes(attributes_)
    {
    }

    ClassType *get_child(const std::vector<Type *> generics)
    {
        for (auto it = this->children.rbegin(); it != this->children.rend(); it++)
        {
            auto &child = *it;

            if (GenericType::are_same_generics(child->generics, generics))
            {
                return child;
            }
        }

        return nullptr;
    }
};
} // namespace Sand::Types
