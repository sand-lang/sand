#pragma once

#include <Xenon/Exceptions/CompilationException.hpp>

namespace Xenon
{
class UnimplementedException : public CompilationException
{
public:
    UnimplementedException(const fs::path &source, antlr4::Token *token) : CompilationException(source, "Unimplemented functionnality: " + token->getText(), token) {}
};
} // namespace Xenon
