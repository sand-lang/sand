#pragma once

#include <grammar/runtime/SandParser.h>

#include <Sand/Scope.hpp>
#include <Sand/Type.hpp>
#include <Sand/Value.hpp>

#include <string>

namespace Sand
{
class Generic
{
public:
    std::string name;
    std::shared_ptr<Scope> scope = nullptr;

    Type *type = nullptr;
    antlr4::ParserRuleContext *default_value_context = nullptr;

    inline SandParser::ExpressionContext *default_expression_context()
    {
        return dynamic_cast<SandParser::ExpressionContext *>(default_value_context);
    }

    inline SandParser::TypeContext *default_type_context()
    {
        return dynamic_cast<SandParser::TypeContext *>(default_value_context);
    }

    Generic(const std::string &name_, const std::shared_ptr<Scope> &scope_, Type *type_, antlr4::ParserRuleContext *default_value_context_ = nullptr) : name(name_), scope(scope_), type(type_), default_value_context(default_value_context_) {}
    Generic(const std::string &name_, const std::shared_ptr<Scope> &scope_, antlr4::ParserRuleContext *default_value_context_ = nullptr) : name(name_), scope(scope_), default_value_context(default_value_context_) {}
};
} // namespace Sand
