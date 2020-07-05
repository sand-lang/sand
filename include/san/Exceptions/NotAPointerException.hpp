#pragma once

#include <san/Exceptions/CompilationException.hpp>

namespace San
{
class NotAPointerException : public CompilationException
{
public:
    NotAPointerException(const fs::path &source, antlr4::Token *token) : NotAPointerException(source, token, token->getText()) {}
    NotAPointerException(const fs::path &source, antlr4::Token *token, const std::string &text) : CompilationException(source, "Value is not a pointer: " + text, token) {}
};
} // namespace San