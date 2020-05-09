#pragma once

#include <san/Exceptions/CompilationException.hpp>

namespace San
{
class InvalidTypeException : public CompilationException
{
public:
    InvalidTypeException(antlr4::Token *token) : InvalidTypeException(token, token->getText()) {}
    InvalidTypeException(antlr4::Token *token, const std::string &text) : CompilationException("Invalid type: " + text, token) {}
};
} // namespace San