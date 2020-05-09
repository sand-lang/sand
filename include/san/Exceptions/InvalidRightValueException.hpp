#pragma once

#include <san/Exceptions/CompilationException.hpp>

namespace San
{
class InvalidRightValueException : public CompilationException
{
public:
    InvalidRightValueException(antlr4::Token *token) : InvalidRightValueException(token, token->getText()) {}
    InvalidRightValueException(antlr4::Token *token, const std::string &text) : CompilationException("Invalid right-value: " + text, token) {}
};
} // namespace San