#pragma once

#include <grammar/runtime/SanParser.h>

#include <san/Alias.hpp>
#include <san/Scope.hpp>
#include <san/Types/GenericType.hpp>

namespace San::Types
{
struct GenericAliasChild
{
    std::vector<Type *> generics;
    Alias *alias;

    GenericAliasChild(const std::vector<Type *> &generics_, Alias *alias_) : generics(generics_), alias(alias_) {}
};

class GenericAlias : public GenericType
{
public:
    SanParser::AliasContext *context = nullptr;
    std::shared_ptr<Scope> scope = nullptr;

    std::vector<GenericAliasChild> children;

    GenericAlias(std::shared_ptr<Scope> scope_, const std::string &name, const std::vector<Generic *> &generics, SanParser::AliasContext *context_) : GenericType(name, generics), context(context_), scope(scope_) {}

    Alias *get_child(const std::vector<Type *> generics)
    {
        for (auto &child : this->children)
        {
            if (GenericType::are_same_generics(child.generics, generics))
            {
                return child.alias;
            }
        }

        return nullptr;
    }
};
} // namespace San::Types
