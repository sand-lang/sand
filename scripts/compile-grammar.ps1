Push-Location "$PSScriptRoot\\..\\src\\grammar"

antlr4 -Dlanguage=Cpp -no-listener -visitor -o runtime SandLexer.g4 SandParser.g4

Pop-Location
