#pragma once

#include <Xenon/Exceptions/CompilationException.hpp>

namespace Xenon
{
class InvalidInputConstraintException : public CompilationException
{
public:
    InvalidInputConstraintException(const fs::path &source, antlr4::Token *token) : InvalidInputConstraintException(source, token, token->getText()) {}
    InvalidInputConstraintException(const fs::path &source, antlr4::Token *token, const std::string &text) : CompilationException(source, "Invalid range: " + text + "(must be a class implementing .begin() and .end())", token) {}
};
} // namespace Xenon