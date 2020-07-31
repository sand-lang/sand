#pragma once

#include <Sand/Exceptions/CompilationException.hpp>

namespace Sand
{
class InvalidValueException : public CompilationException
{
public:
    InvalidValueException(const fs::path &source, antlr4::Token *token) : InvalidValueException(source, token, token->getText()) {}
    InvalidValueException(const fs::path &source, antlr4::Token *token, const std::string &text) : CompilationException(source, "Invalid value: " + text, token) {}
};
} // namespace Sand