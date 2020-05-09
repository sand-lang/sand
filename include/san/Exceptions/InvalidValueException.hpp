#pragma once

#include <san/Exceptions/CompilationException.hpp>

namespace San
{
class InvalidValueException : public CompilationException
{
public:
    InvalidValueException(antlr4::Token *token) : InvalidValueException(token, token->getText()) {}
    InvalidValueException(antlr4::Token *token, const std::string &text) : CompilationException("Invalid value: " + text, token) {}
};
} // namespace San