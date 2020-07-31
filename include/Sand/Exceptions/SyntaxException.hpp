#pragma once

#include <Sand/Exceptions/CompilationException.hpp>

namespace Sand
{
class SyntaxException : public CompilationException
{
public:
    SyntaxException(const fs::path &source, antlr4::Token *token, const std::string &reason) : CompilationException(source, "Syntax error at '" + token->getText() + "': " + reason, token) {}
};
} // namespace Sand
