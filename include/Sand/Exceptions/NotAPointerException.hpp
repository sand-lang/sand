#pragma once

#include <Sand/Exceptions/CompilationException.hpp>

namespace Sand
{
class NotAPointerException : public CompilationException
{
public:
    NotAPointerException(const fs::path &source, antlr4::Token *token) : NotAPointerException(source, token, token->getText()) {}
    NotAPointerException(const fs::path &source, antlr4::Token *token, const std::string &text) : CompilationException(source, "Value is not a pointer: " + text, token) {}
};
} // namespace Sand