#pragma once

#include <san/Exceptions/CompilationException.hpp>

namespace San
{
class NotAClassException : public CompilationException
{
public:
    NotAClassException(antlr4::Token *token) : NotAClassException(token, token->getText()) {}
    NotAClassException(antlr4::Token *token, const std::string &text) : CompilationException("Type is not a class: " + text, token) {}
};
} // namespace San