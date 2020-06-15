#pragma once

#include <san/Exceptions/CompilationException.hpp>

namespace San
{
class InvalidInputConstraintException : public CompilationException
{
public:
    InvalidInputConstraintException(antlr4::Token *token) : InvalidInputConstraintException(token, token->getText()) {}
    InvalidInputConstraintException(antlr4::Token *token, const std::string &text) : CompilationException("Invalid range: " + text + "(must be a class implementing .begin() and .end())", token) {}
};
} // namespace San