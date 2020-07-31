#pragma once

#include <Sand/Exceptions/CompilationException.hpp>

namespace Sand
{
class InvalidTypeException : public CompilationException
{
public:
    InvalidTypeException(const fs::path &source, antlr4::Token *token) : InvalidTypeException(source, token, token->getText()) {}
    InvalidTypeException(const fs::path &source, antlr4::Token *token, const std::string &text) : CompilationException(source, "Invalid type: " + text, token) {}
};
} // namespace Sand