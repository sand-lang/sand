#pragma once

#include <san/Exceptions/CompilationException.hpp>

namespace San
{
class NotAPointerException : public CompilationException
{
public:
    NotAPointerException(antlr4::Token *token) : NotAPointerException(token, token->getText()) {}
    NotAPointerException(antlr4::Token *token, const std::string &text) : CompilationException("Value is not a pointer: " + text, token) {}
};
} // namespace San