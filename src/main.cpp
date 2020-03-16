#include <filesystem>
#include <iostream>

#include <Lexer.h>
#include <Parser.h>

#include <san/Compiler.hpp>

#include "grammar/runtime/SanLexer.h"
#include "grammar/runtime/SanParser.h"

#include "grammar/Visitor.hpp"

int main(int argc, char **argv)
{
    std::string pwd = std::filesystem::current_path().string();
    std::string path = argc > 1 ? argv[1] : "test.sn";

    std::ifstream stream;
    stream.open(pwd + '/' + path);

    antlr4::ANTLRInputStream *input = new antlr4::ANTLRInputStream(stream);
    SanLexer lexer(input);
    antlr4::CommonTokenStream tokens(&lexer);
    SanParser parser(&tokens);

    SanParser::InstructionsContext *tree = parser.instructions();
    San::Visitor visitor;
    antlrcpp::Any program = visitor.visitInstructions(tree);

    std::string bytecode = "";
    llvm::raw_string_ostream out_stream(bytecode);
    out_stream << *visitor.module;
    out_stream.flush();

    std::cout << out_stream.str() << std::endl;

    // San::Compiler compiler(visitor.module);
    // auto objects = compiler.generate_objects();

    // for (const auto &object : objects)
    //     std::cout << object << std::endl;

    return 0;
}
