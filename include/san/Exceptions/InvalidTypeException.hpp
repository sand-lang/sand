#pragma once

#include <san/Exceptions/CompilationException.hpp>

namespace San
{
class InvalidTypeException : public CompilationException
{
public:
    InvalidTypeException(const fs::path &source, antlr4::Token *token) : InvalidTypeException(source, token, token->getText()) {}
    InvalidTypeException(const fs::path &source, antlr4::Token *token, const std::string &text) : CompilationException(source, "Invalid type: " + text, token) {}
};
} // namespace San