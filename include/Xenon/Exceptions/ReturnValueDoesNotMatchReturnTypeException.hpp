#pragma once

#include <Xenon/Exceptions/CompilationException.hpp>
#include <Xenon/Type.hpp>

namespace Xenon
{
class ReturnValueDoesNotMatchReturnTypeException : public CompilationException
{
public:
    ReturnValueDoesNotMatchReturnTypeException(const fs::path &source, antlr4::Token *token, const Type *given, const Type* expected) : CompilationException(source, "Returned value's type '" + given->to_string() + "' doesn't match function's return type '" + expected->to_string() + "'", token) {}
};
} // namespace Xenon
