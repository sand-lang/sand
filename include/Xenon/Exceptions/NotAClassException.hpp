#pragma once

#include <Xenon/Exceptions/CompilationException.hpp>

namespace Xenon
{
class NotAClassException : public CompilationException
{
public:
    NotAClassException(const fs::path &source, antlr4::Token *token) : NotAClassException(source, token, token->getText()) {}
    NotAClassException(const fs::path &source, antlr4::Token *token, const std::string &text) : CompilationException(source, "Type is not a class: " + text, token) {}
};
} // namespace Xenon