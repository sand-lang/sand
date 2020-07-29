#pragma once

#include <Xenon/Exceptions/CompilationException.hpp>

#include <Xenon/Types/ClassType.hpp>

namespace Xenon
{
class PropertyNotFoundException : public CompilationException
{
public:
    PropertyNotFoundException(const fs::path &source, antlr4::Token *token, Types::ClassType *class_type) : CompilationException(source, "Property '" + token->getText() + "' not found in class '" + class_type->name + "'", token) {}
};
} // namespace Xenon