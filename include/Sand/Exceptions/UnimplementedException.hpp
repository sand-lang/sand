#pragma once

#include <Sand/Exceptions/CompilationException.hpp>

namespace Sand
{
class UnimplementedException : public CompilationException
{
public:
    UnimplementedException(const fs::path &source, antlr4::Token *token) : CompilationException(source, "Unimplemented functionnality: " + token->getText(), token) {}
};
} // namespace Sand
