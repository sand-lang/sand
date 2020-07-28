#pragma once

#include <san/Exceptions/CompilationException.hpp>

namespace San
{
class UnimplementedException : public CompilationException
{
public:
    UnimplementedException(const fs::path &source, antlr4::Token *token) : CompilationException(source, "Unimplemented functionnality: " + token->getText(), token) {}
};
} // namespace San
