#pragma once

#include <san/Exceptions/CompilationException.hpp>

namespace San
{
class ExpressionHasNotClassTypeException : public CompilationException
{
public:
    ExpressionHasNotClassTypeException(const fs::path &source, antlr4::Token *token) : ExpressionHasNotClassTypeException(source, token, token->getText()) {}
    ExpressionHasNotClassTypeException(const fs::path &source, antlr4::Token *token, const std::string &text) : CompilationException(source, "Expression has not class type: " + text, token) {}
};
} // namespace San