#include <filesystem>
#include <iostream>

#include <Lexer.h>
#include <Parser.h>

#include <san/Compiler.hpp>
#include <san/Debugger.hpp>

#include "grammar/runtime/SanLexer.h"
#include "grammar/runtime/SanParser.h"

#include "grammar/Visitor.hpp"

int main(int argc, char **argv)
{
    San::Debugger debug;

    std::string pwd = std::filesystem::current_path().string();
    std::string path = argc > 1 ? argv[1] : "test.sn";

    std::ifstream stream;
    stream.open(pwd + '/' + path);

    antlr4::ANTLRInputStream *input = new antlr4::ANTLRInputStream(stream);
    SanLexer lexer(input);
    antlr4::CommonTokenStream tokens(&lexer);
    SanParser parser(&tokens);

    debug.start_timer("bytecode");

    SanParser::InstructionsContext *tree = parser.instructions();
    San::Visitor visitor;
    antlrcpp::Any program = visitor.visitInstructions(tree);

    auto elapsed_bytecode = debug.end_timer("bytecode");

    std::string bytecode = "";
    llvm::raw_string_ostream out_stream(bytecode);
    out_stream << *visitor.env.module;
    out_stream.flush();

    debug.out << out_stream.str() << std::endl;

    debug.start_timer("objects");

    San::Compiler compiler(visitor.env.module);
    auto objects = compiler.generate_objects();

    auto elapsed_objects = debug.end_timer("objects");

    for (const auto &object : objects)
        debug.out << object << std::endl;

    std::string objects_str(" ");
    for (const auto &object : objects)
    {
        objects_str += object + " ";
    }

    debug.start_timer("linking");

    std::system(("/usr/bin/ld " + objects_str + "-lSystem -o output").c_str());

    auto elapsed_linking = debug.end_timer("linking");

    debug.out << "Finished generating IR in " << elapsed_bytecode.count() << " secs" << std::endl;
    debug.out << "Finished generating object files in " << elapsed_objects.count() << " secs" << std::endl;
    debug.out << "Finished linking in " << elapsed_linking.count() << " secs" << std::endl;

    return 0;
}
