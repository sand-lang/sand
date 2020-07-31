#pragma once

#include <exception>
#include <string>

#include <Sand/filesystem.hpp>

#include "antlr4-runtime.h"

namespace Sand
{
class CompilationException : public std::exception
{
private:
fs::path source;
    std::string error;
    antlr4::Token *token = nullptr;

public:
    CompilationException(const fs::path &source_, const std::string &error_, antlr4::Token *token_) : source(source_), error(error_), token(token_) {}

    const char *what() const noexcept
    {
        auto str = this->get_error();

        auto copy = new char[str.size() + 1];
        std::strcpy(copy, str.c_str());

        return copy;
    }

    std::string get_error() const
    {
        std::stringstream ss;

        ss << this->source.u8string();
        ss << ":";
        ss << this->token->getLine();
        ss << ":";
        ss << this->token->getCharPositionInLine() + 1;
        ss << ": ";

        ss << this->error;

        return ss.str();
    }
};
} // namespace Sand