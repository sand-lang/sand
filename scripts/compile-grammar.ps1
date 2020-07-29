Push-Location "$PSScriptRoot\\..\\src\\grammar"

antlr4 -Dlanguage=Cpp -no-listener -visitor -o runtime XenonLexer.g4 XenonParser.g4

Pop-Location
