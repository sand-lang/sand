#pragma once

#include <Sand/Exceptions/CompilationException.hpp>
#include <Sand/Type.hpp>

namespace Sand
{
class OpaqueTypeNotAllowedException : public CompilationException
{
public:
    OpaqueTypeNotAllowedException(const fs::path &source, antlr4::Token *token) : CompilationException(source, "Incomplete type not allowed: " + token->getText(), token) {}
};
} // namespace Sand
