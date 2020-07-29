#pragma once

#include <Xenon/Exceptions/CompilationException.hpp>

namespace Xenon
{
class InvalidRangeException : public CompilationException
{
public:
    InvalidRangeException(const fs::path &source, antlr4::Token *token) : InvalidRangeException(source, token, token->getText()) {}
    InvalidRangeException(const fs::path &source, antlr4::Token *token, const std::string &text) : CompilationException(source, "Invalid range: " + text + "(must be a class implementing .begin() and .end())", token) {}
};
} // namespace Xenon