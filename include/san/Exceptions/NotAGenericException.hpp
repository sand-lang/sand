#pragma once

#include <san/Exceptions/CompilationException.hpp>

namespace San
{
class NotAGenericException : public CompilationException
{
public:
    NotAGenericException(antlr4::Token *token) : NotAGenericException(token, token->getText()) {}
    NotAGenericException(antlr4::Token *token, const std::string &text) : CompilationException("Name is not a generic: " + text, token) {}
};
} // namespace San