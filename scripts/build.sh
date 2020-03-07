#!/bin/bash

origin_directory=$PWD
grammar_directory="$( cd "$( dirname "${BASH_SOURCE[0]}" )" >/dev/null 2>&1 && pwd )"

cd $grammar_directory

cmake ..
cmake --build .

cd $origin_directory
