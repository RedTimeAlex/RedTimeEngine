#CMake min version
cmake_minimum_required(VERSION 3.0)

#projet propirties
project(DarkAstEngine VERSION 0.0.1 LANGUAGES CXX)

#set output directs
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_subdirectory(Documentation)
