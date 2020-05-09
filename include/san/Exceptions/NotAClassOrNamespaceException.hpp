#pragma once

#include <san/Exceptions/CompilationException.hpp>

namespace San
{
class NotAClassOrNamespaceException : public CompilationException
{
public:
    NotAClassOrNamespaceException(antlr4::Token *token) : NotAClassOrNamespaceException(token, token->getText()) {}
    NotAClassOrNamespaceException(antlr4::Token *token, const std::string &text) : CompilationException("Name is not a class or namespace: " + text, token) {}
};
} // namespace San