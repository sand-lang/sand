#pragma once

#include <Sand/Exceptions/CompilationException.hpp>

namespace Sand
{
class NotAGenericException : public CompilationException
{
public:
    NotAGenericException(const fs::path &source, antlr4::Token *token) : NotAGenericException(source, token, token->getText()) {}
    NotAGenericException(const fs::path &source, antlr4::Token *token, const std::string &text) : CompilationException(source, "Name is not a generic: " + text, token) {}
};
} // namespace Sand