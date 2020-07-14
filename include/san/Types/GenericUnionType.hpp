#pragma once

#include <grammar/runtime/SanParser.h>

#include <san/Types/GenericType.hpp>
#include <san/Types/UnionType.hpp>

namespace San::Types
{
class GenericUnionType : public GenericType
{
public:
    SanParser::UnionStatementContext *context = nullptr;
    std::shared_ptr<Scope> scope = nullptr;

    std::vector<UnionType *> children;

    GenericUnionType(const std::shared_ptr<Scope> &scope_, const std::string &name, const std::vector<Generic *> &generics, SanParser::UnionStatementContext *context_) : GenericType(name, generics), context(context_), scope(scope_) {}

    UnionType *get_child(const std::vector<Type *> generics)
    {
        for (auto &child : this->children)
        {
            if (GenericType::are_same_generics(child->generics, generics))
            {
                return child;
            }
        }

        return nullptr;
    }
};
} // namespace San::Types
