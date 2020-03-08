#pragma once

#include "runtime/SanParserBaseVisitor.h"

namespace San
{
class Visitor : public SanParserBaseVisitor
{
public:
    antlrcpp::Any visitInstructions(SanParser::InstructionsContext *context) override
    {
        std::cout << context->getText() << std::endl;
        return 0;
    }
};
} // namespace Narwhal
