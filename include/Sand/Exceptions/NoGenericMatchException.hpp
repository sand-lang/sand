#pragma once

#include <Sand/Exceptions/CompilationException.hpp>

#include <Sand/Value.hpp>

namespace Sand
{
class NoGenericMatchException : public CompilationException
{
public:
    NoGenericMatchException(const fs::path &source, antlr4::Token *token) : CompilationException(source, "No generic matches the given types/values: " + token->getText(), token) {}
};
} // namespace Sand