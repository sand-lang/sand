#pragma once

#include <Xenon/Exceptions/CompilationException.hpp>

namespace Xenon
{
class InvalidLeftValueException : public CompilationException
{
public:
    InvalidLeftValueException(const fs::path &source, antlr4::Token *token) : InvalidLeftValueException(source, token, token->getText()) {}
    InvalidLeftValueException(const fs::path &source, antlr4::Token *token, const std::string &text) : CompilationException(source, "Invalid left-value: " + text, token) {}
};
} // namespace Xenon