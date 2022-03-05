project(compiler_cminus)
CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

SET (CMAKE_CXX_STANDARD 14)

find_package(FLEX REQUIRED)
find_package(BISON REQUIRED)

# Import LLVM
find_package(LLVM REQUIRED CONFIG)
message(STATUS "Found LLVM ${LLVM_PACKAGE_VERSION}")
message(STATUS "Using LLVMConfig.cmake in: ${LLVM_DIR}")
llvm_map_components_to_libnames(
  llvm_libs
  all
)

include_directories(${LLVM_INCLUDE_DIRS})
add_definitions(${LLVM_DEFINITIONS})

include_directories(include)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

add_subdirectory(src/analyzer)
add_subdirectory(src/common)
add_subdirectory(src/syntax_tree_c)
add_subdirectory(src/syntax_tree_cpp)
add_subdirectory(src/tests)
add_subdirectory(src/io)
add_subdirectory(src/cminusc)
