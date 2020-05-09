#pragma once

#include <san/Exceptions/CompilationException.hpp>

namespace San
{
class UnknownNameException : public CompilationException
{
public:
    UnknownNameException(antlr4::Token *token) : CompilationException("Unknown name: " + token->getText(), token) {}
};
} // namespace San