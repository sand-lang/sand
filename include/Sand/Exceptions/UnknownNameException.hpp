#pragma once

#include <Sand/Exceptions/CompilationException.hpp>

namespace Sand
{
class UnknownNameException : public CompilationException
{
public:
    UnknownNameException(const fs::path &source, antlr4::Token *token) : CompilationException(source, "Unknown name: " + token->getText(), token) {}
};
} // namespace Sand