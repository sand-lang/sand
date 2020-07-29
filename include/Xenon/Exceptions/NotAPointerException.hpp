#pragma once

#include <Xenon/Exceptions/CompilationException.hpp>

namespace Xenon
{
class NotAPointerException : public CompilationException
{
public:
    NotAPointerException(const fs::path &source, antlr4::Token *token) : NotAPointerException(source, token, token->getText()) {}
    NotAPointerException(const fs::path &source, antlr4::Token *token, const std::string &text) : CompilationException(source, "Value is not a pointer: " + text, token) {}
};
} // namespace Xenon