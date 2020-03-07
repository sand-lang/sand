#!/bin/bash

origin_directory=$PWD
script_directory="$( cd "$( dirname "${BASH_SOURCE[0]}" )" >/dev/null 2>&1 && pwd )"

grammar_directory="$script_directory/../src/grammar"

cd $grammar_directory

antlr -Dlanguage=Cpp -no-listener -visitor -o runtime SanLexer.g4 SanParser.g4

cd $origin_directory
