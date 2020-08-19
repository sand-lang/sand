#pragma once

#include <grammar/runtime/SandParser.h>

#include <Sand/Scope.hpp>
#include <Sand/Type.hpp>
#include <Sand/Value.hpp>

#include <string>
#include <vector>

namespace Sand
{
class Generic
{
public:
    std::string name;
    std::shared_ptr<Scope> scope = nullptr;

    bool is_expression = false;
    bool is_type = false;

    Type *type = nullptr;
    antlr4::ParserRuleContext *default_value_context = nullptr;

    virtual ~Generic() {}

    inline SandParser::ExpressionContext *default_expression_context()
    {
        return dynamic_cast<SandParser::ExpressionContext *>(default_value_context);
    }

    inline SandParser::TypeContext *default_type_context()
    {
        return dynamic_cast<SandParser::TypeContext *>(default_value_context);
    }

    Generic(const std::string &name_, const std::shared_ptr<Scope> &scope_, Type *type_, SandParser::ExpressionContext *default_value_context_ = nullptr) : name(name_), scope(scope_), is_expression(false), type(type_), default_value_context(default_value_context_) {}
    Generic(const std::string &name_, const std::shared_ptr<Scope> &scope_, SandParser::TypeContext *default_value_context_ = nullptr) : name(name_), scope(scope_), is_type(true), default_value_context(default_value_context_) {}
};

class VariadicGeneric : public Generic
{
public:
    std::vector<antlr4::ParserRuleContext *> default_value_context;

    std::vector<SandParser::ExpressionContext *> default_expression_context()
    {
        std::vector<SandParser::ExpressionContext *> out;

        for (const auto &value : default_value_context)
        {
            out.push_back(static_cast<SandParser::ExpressionContext *>(value));
        }

        return out;
    }

    std::vector<SandParser::TypeContext *> default_type_context()
    {
        std::vector<SandParser::TypeContext *> out;

        for (const auto &value : default_value_context)
        {
            out.push_back(static_cast<SandParser::TypeContext *>(value));
        }

        return out;
    }

    VariadicGeneric(const std::string &name, const std::shared_ptr<Scope> &scope, Type *type, const std::vector<SandParser::ExpressionContext *> &default_value_context_)
        : Generic(name, scope, type),
          default_value_context(std::vector<antlr4::ParserRuleContext *>(default_value_context_.begin(), default_value_context_.end())) {}

    VariadicGeneric(const std::string &name, const std::shared_ptr<Scope> &scope, const std::vector<SandParser::TypeContext *> &default_value_context_)
        : Generic(name, scope),
          default_value_context(std::vector<antlr4::ParserRuleContext *>(default_value_context_.begin(), default_value_context_.end())) {}
};
} // namespace Sand
