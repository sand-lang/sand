#pragma once

#include <san/Exceptions/CompilationException.hpp>
#include <san/Type.hpp>

namespace San
{
class OpaqueTypeNotAllowedException : public CompilationException
{
public:
    OpaqueTypeNotAllowedException(const fs::path &source, antlr4::Token *token) : CompilationException(source, "Incomplete type not allowed: " + token->getText(), token) {}
};
} // namespace San
