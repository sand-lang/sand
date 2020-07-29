#pragma once

#include <Xenon/Exceptions/CompilationException.hpp>

namespace Xenon
{
class ExpressionHasNotClassTypeException : public CompilationException
{
public:
    ExpressionHasNotClassTypeException(const fs::path &source, antlr4::Token *token) : ExpressionHasNotClassTypeException(source, token, token->getText()) {}
    ExpressionHasNotClassTypeException(const fs::path &source, antlr4::Token *token, const std::string &text) : CompilationException(source, "Expression has not class type: " + text, token) {}
};
} // namespace Xenon