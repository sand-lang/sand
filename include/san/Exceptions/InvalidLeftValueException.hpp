#pragma once

#include <san/Exceptions/CompilationException.hpp>

namespace San
{
class InvalidLeftValueException : public CompilationException
{
public:
    InvalidLeftValueException(antlr4::Token *token) : InvalidLeftValueException(token, token->getText()) {}
    InvalidLeftValueException(antlr4::Token *token, const std::string &text) : CompilationException("Invalid left-value: " + text, token) {}
};
} // namespace San