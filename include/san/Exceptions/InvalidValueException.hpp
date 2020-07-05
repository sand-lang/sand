#pragma once

#include <san/Exceptions/CompilationException.hpp>

namespace San
{
class InvalidValueException : public CompilationException
{
public:
    InvalidValueException(const fs::path &source, antlr4::Token *token) : InvalidValueException(source, token, token->getText()) {}
    InvalidValueException(const fs::path &source, antlr4::Token *token, const std::string &text) : CompilationException(source, "Invalid value: " + text, token) {}
};
} // namespace San