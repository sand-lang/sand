#pragma once

#include <Sand/Exceptions/CompilationException.hpp>
#include <Sand/Type.hpp>

namespace Sand
{
class TypesNotCompatibleException : public CompilationException
{
public:
    TypesNotCompatibleException(const fs::path &source, antlr4::Token *token, Type *t1, Type *t2) : CompilationException(source, "Types not compatible '" + t1->to_string() + "' - '" + t2->to_string() + "'", token) {}
};
} // namespace Sand
