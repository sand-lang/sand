#pragma once

#include <Xenon/Exceptions/CompilationException.hpp>
#include <Xenon/Type.hpp>

namespace Xenon
{
class OpaqueTypeNotAllowedException : public CompilationException
{
public:
    OpaqueTypeNotAllowedException(const fs::path &source, antlr4::Token *token) : CompilationException(source, "Incomplete type not allowed: " + token->getText(), token) {}
};
} // namespace Xenon
