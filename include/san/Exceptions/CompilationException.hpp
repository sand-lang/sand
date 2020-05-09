#pragma once

#include <exception>
#include <string>

#include "antlr4-runtime.h"

namespace San
{
class CompilationException : public std::exception
{
private:
    std::string error;
    antlr4::Token *token = nullptr;

public:
    CompilationException(const std::string &error_, antlr4::Token *token_) : error(error_), token(token_) {}

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

        ss << "[";
        ss << this->token->getLine();
        ss << ":";
        ss << this->token->getCharPositionInLine() + 1;
        ss << "] ";

        ss << this->error;

        return ss.str();
    }
};
} // namespace San