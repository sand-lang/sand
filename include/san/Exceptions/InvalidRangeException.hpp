#pragma once

#include <san/Exceptions/CompilationException.hpp>

namespace San
{
class InvalidRangeException : public CompilationException
{
public:
    InvalidRangeException(antlr4::Token *token) : InvalidRangeException(token, token->getText()) {}
    InvalidRangeException(antlr4::Token *token, const std::string &text) : CompilationException("Invalid range: " + text + "(must be a class implementing .begin() and .end())", token) {}
};
} // namespace San