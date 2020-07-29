#pragma once

#include <Xenon/Exceptions/CompilationException.hpp>

namespace Xenon
{
class InvalidTypeException : public CompilationException
{
public:
    InvalidTypeException(const fs::path &source, antlr4::Token *token) : InvalidTypeException(source, token, token->getText()) {}
    InvalidTypeException(const fs::path &source, antlr4::Token *token, const std::string &text) : CompilationException(source, "Invalid type: " + text, token) {}
};
} // namespace Xenon