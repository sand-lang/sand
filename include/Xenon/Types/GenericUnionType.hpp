#pragma once

#include <grammar/runtime/XenonParser.h>

#include <Xenon/Types/GenericType.hpp>
#include <Xenon/Types/UnionType.hpp>

#include <Xenon/Attributes.hpp>

namespace Xenon::Types
{
class GenericUnionType : public GenericType
{
public:
    XenonParser::UnionStatementContext *context = nullptr;
    std::shared_ptr<Scope> scope = nullptr;

    std::vector<UnionType *> children;

    Attributes attributes;

    GenericUnionType(const std::shared_ptr<Scope> &scope_, const std::string &name, const std::vector<Generic *> &generics, XenonParser::UnionStatementContext *context_, const Attributes &attributes_) : GenericType(name, generics), context(context_), scope(scope_), attributes(attributes_) {}

    UnionType *get_child(const std::vector<Type *> generics)
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
