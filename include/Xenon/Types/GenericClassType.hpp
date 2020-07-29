#pragma once

#include <grammar/runtime/XenonParser.h>

#include <Xenon/Types/ClassType.hpp>
#include <Xenon/Types/GenericType.hpp>

#include <Xenon/Attributes.hpp>

namespace Xenon::Types
{
class GenericClassType : public GenericType
{
public:
    XenonParser::ClassStatementContext *context = nullptr;
    std::shared_ptr<Scope> scope = nullptr;

    std::vector<ClassType *> children;

    Attributes attributes;

    GenericClassType(const std::shared_ptr<Scope> &scope_, const std::string &name, const std::vector<Generic *> &generics, XenonParser::ClassStatementContext *context_, const Attributes &attributes_) : GenericType(name, generics), context(context_), scope(scope_), attributes(attributes_)
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
} // namespace Xenon::Types
