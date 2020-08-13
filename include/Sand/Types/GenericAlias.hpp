#pragma once

#include <grammar/runtime/SandParser.h>

#include <Sand/Alias.hpp>
#include <Sand/Scope.hpp>
#include <Sand/Types/GenericType.hpp>

namespace Sand::Types
{
struct GenericAliasChild
{
    std::vector<Name *> generics;
    Alias *alias;

    GenericAliasChild(const std::vector<Name *> &generics_, Alias *alias_) : generics(generics_), alias(alias_) {}
};

class GenericAlias : public GenericType
{
public:
    SandParser::AliasContext *context = nullptr;
    std::shared_ptr<Scope> scope = nullptr;

    std::vector<GenericAliasChild> children;

    GenericAlias(std::shared_ptr<Scope> scope_, const std::string &name, const std::vector<Generic *> &generics, SandParser::AliasContext *context_) : GenericType(name, generics), context(context_), scope(scope_) {}

    Alias *get_child(const std::vector<Name *> &generics)
    {
        for (auto child = this->children.rbegin(); child != this->children.rend(); child++)
        {
            if (GenericType::are_same_generics(child->generics, generics))
            {
                return child->alias;
            }
        }

        return nullptr;
    }
};
} // namespace Sand::Types
