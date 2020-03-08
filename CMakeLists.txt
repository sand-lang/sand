cmake_minimum_required(VERSION 3.2 FATAL_ERROR)
cmake_policy(VERSION 3.2)

project(san
    VERSION "1.0.1"
    DESCRIPTION "SAN compiler"
)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/libs")

file(GLOB_RECURSE SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")

add_executable(${PROJECT_NAME} ${SOURCES})

set(INCLUDES 
    "${CMAKE_CURRENT_SOURCE_DIR}/include"
    "${CMAKE_CURRENT_SOURCE_DIR}/src"
    ${DEPENDENCIES_HEADERS}
)

target_include_directories(${PROJECT_NAME} PUBLIC ${INCLUDES})
llvm_map_components_to_libnames(llvm_libs Core Remarks Support BinaryFormat Demangle)

target_link_libraries(${PROJECT_NAME} antlr4_static ${llvm_libs})
