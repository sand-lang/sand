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
llvm_map_components_to_libnames(llvm_libs TextAPI OrcJIT JITLink ObjectYAML WindowsManifest Coverage TableGen LTO Passes ObjCARCOpts Coroutines LibDriver XRay XCoreDisassembler XCoreCodeGen XCoreDesc XCoreInfo WebAssemblyDisassembler WebAssemblyCodeGen WebAssemblyDesc WebAssemblyAsmParser WebAssemblyInfo SystemZDisassembler SystemZCodeGen SystemZAsmParser SystemZDesc SystemZInfo SparcDisassembler SparcCodeGen SparcAsmParser SparcDesc SparcInfo RISCVDisassembler RISCVCodeGen RISCVAsmParser RISCVDesc RISCVUtils RISCVInfo PowerPCDisassembler PowerPCCodeGen PowerPCAsmParser PowerPCDesc PowerPCInfo NVPTXCodeGen NVPTXDesc NVPTXInfo MSP430Disassembler MSP430CodeGen MSP430AsmParser MSP430Desc MSP430Info MipsDisassembler MipsCodeGen MipsAsmParser MipsDesc MipsInfo LanaiDisassembler LanaiCodeGen LanaiAsmParser LanaiDesc LanaiInfo HexagonDisassembler HexagonCodeGen HexagonAsmParser HexagonDesc HexagonInfo BPFDisassembler BPFCodeGen BPFAsmParser BPFDesc BPFInfo ARMDisassembler ARMCodeGen ARMAsmParser ARMDesc ARMUtils ARMInfo AMDGPUDisassembler AMDGPUCodeGen MIRParser ipo Instrumentation Vectorize Linker IRReader AsmParser AMDGPUAsmParser AMDGPUDesc AMDGPUUtils AMDGPUInfo AArch64Disassembler AArch64CodeGen AArch64AsmParser AArch64Desc AArch64Utils AArch64Info Symbolize DebugInfoPDB FuzzMutate LineEditor MCA DebugInfoGSYM X86Disassembler X86AsmParser X86CodeGen GlobalISel SelectionDAG AsmPrinter DebugInfoDWARF X86Desc MCDisassembler X86Utils X86Info MCJIT Interpreter ExecutionEngine RuntimeDyld CodeGen Target ScalarOpts InstCombine AggressiveInstCombine TransformUtils BitWriter Analysis ProfileData DlltoolDriver Option Object MCParser MC DebugInfoCodeView DebugInfoMSF BitReader Core Remarks BinaryFormat BitstreamReader Support Demangle)

target_link_libraries(${PROJECT_NAME} antlr4_static ${llvm_libs})
