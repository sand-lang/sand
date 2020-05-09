#pragma once

#include <san/Exceptions/CompilationException.hpp>

namespace San
{
class NotAFunctionException : public CompilationException
{
public:
    NotAFunctionException(antlr4::Token *token) : NotAFunctionException(token, token->getText()) {}
    NotAFunctionException(antlr4::Token *token, const std::string &text) : CompilationException("Expression is not a function: " + text, token) {}
};
} // namespace San