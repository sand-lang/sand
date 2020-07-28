#pragma once

#include <san/Exceptions/CompilationException.hpp>

namespace San
{
class SyntaxException : public CompilationException
{
public:
    SyntaxException(const fs::path &source, antlr4::Token *token, const std::string &reason) : CompilationException(source, "Syntax error at '" + token->getText() + "': " + reason, token) {}
};
} // namespace San
