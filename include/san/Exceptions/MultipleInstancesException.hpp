#pragma once

#include <san/Exceptions/CompilationException.hpp>

namespace San
{
class MultipleInstancesException : public CompilationException
{
public:
    MultipleInstancesException(antlr4::Token *token) : MultipleInstancesException(token, token->getText()) {}
    MultipleInstancesException(antlr4::Token *token, const std::string &text) : CompilationException("Found multiple instances for name: " + text, token) {}
};
} // namespace San