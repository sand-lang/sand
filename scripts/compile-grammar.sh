#!/bin/bash

origin_directory=$PWD
grammar_directory="$( cd "$( dirname "${BASH_SOURCE[0]}" )" >/dev/null 2>&1 && pwd )"

cd $grammar_directory

antlr -Dlanguage=Cpp SanLexer.g4 SanParser.g4

cd $origin_directory
