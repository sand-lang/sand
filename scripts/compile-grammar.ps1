Push-Location "$PSScriptRoot\\..\\src\\grammar"

antlr4 -Dlanguage=Cpp SanLexer.g4 SanParser.g4

Pop-Location
