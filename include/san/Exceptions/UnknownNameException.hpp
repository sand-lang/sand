#pragma once

#include <san/Exceptions/CompilationException.hpp>

namespace San
{
class UnknownNameException : public CompilationException
{
public:
    UnknownNameException(const fs::path &source, antlr4::Token *token) : CompilationException(source, "Unknown name: " + token->getText(), token) {}
};
} // namespace San