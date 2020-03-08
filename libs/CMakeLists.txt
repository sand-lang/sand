add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/antlr4/runtime/Cpp")
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/llvm")

add_definitions(${LLVM_DEFINITIONS})

set(DEPENDENCIES_HEADERS
  ${LLVM_INCLUDE_DIRS}
  "${CMAKE_CURRENT_SOURCE_DIR}/antlr4/runtime/Cpp/runtime/src"

  PARENT_SCOPE
)
