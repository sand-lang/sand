#pragma once

#include <san/Exceptions/CompilationException.hpp>

namespace San
{
class ReturnOutsideOfFunctionException : public CompilationException
{
public:
    ReturnOutsideOfFunctionException(const fs::path &source, antlr4::Token *token) : CompilationException(source, "Can't return outside of function: '" + token->getText() + "'", token) {}
};
} // namespace San
