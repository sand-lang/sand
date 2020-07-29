#pragma once

#include <Xenon/Exceptions/CompilationException.hpp>

namespace Xenon
{
class ReturnOutsideOfFunctionException : public CompilationException
{
public:
    ReturnOutsideOfFunctionException(const fs::path &source, antlr4::Token *token) : CompilationException(source, "Can't return outside of function: '" + token->getText() + "'", token) {}
};
} // namespace Xenon
