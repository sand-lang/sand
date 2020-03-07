Push-Location "$PSScriptRoot\\..\\src\\grammar"

antlr4 -Dlanguage=Cpp -no-listener -visitor -o runtime SanLexer.g4 SanParser.g4

Pop-Location
