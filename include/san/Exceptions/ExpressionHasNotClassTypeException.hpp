#pragma once

#include <san/Exceptions/CompilationException.hpp>

namespace San
{
class ExpressionHasNotClassTypeException : public CompilationException
{
public:
    ExpressionHasNotClassTypeException(antlr4::Token *token) : ExpressionHasNotClassTypeException(token, token->getText()) {}
    ExpressionHasNotClassTypeException(antlr4::Token *token, const std::string &text) : CompilationException("Expression has not class type: " + text, token) {}
};
} // namespace San