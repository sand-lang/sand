#pragma once

#include <grammar/runtime/SanParser.h>

#include <san/Types/ClassType.hpp>
#include <san/Types/GenericType.hpp>

namespace San::Types
{
class GenericClassType : public GenericType
{
public:
    SanParser::ClassStatementContext *context = nullptr;
    std::shared_ptr<Scope> scope = nullptr;

    std::vector<ClassType *> children;

    GenericClassType(const std::shared_ptr<Scope> &scope_, const std::string &name, const std::vector<Generic *> &generics, SanParser::ClassStatementContext *context_) : GenericType(name, generics), context(context_), scope(scope_) {}

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
} // namespace San::Types
