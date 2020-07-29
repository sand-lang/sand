#pragma once

#include <Xenon/Exceptions/CompilationException.hpp>

namespace Xenon
{
class MultipleInstancesException : public CompilationException
{
public:
    MultipleInstancesException(const fs::path &source, antlr4::Token *token) : MultipleInstancesException(source, token, token->getText()) {}
    MultipleInstancesException(const fs::path &source, antlr4::Token *token, const std::string &text) : CompilationException(source, "Found multiple instances for name: " + text, token) {}
};
} // namespace Xenon