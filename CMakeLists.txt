#CMake min version
cmake_minimum_required(VERSION 3.5)

#projet propirties
project(
	RedTimeEngine 
	VERSION 0.0.1 
	DESCRIPTION "RedTimeEngine is a 2d engine created primarily for turn-based strategy games. It is based on openGL."
	LANGUAGES NONE)

option(BUILD_SHARED_LIBS "Build shared or static library. If ON, build shared." ON)

#set output directs
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_subdirectory(Documentation)
add_subdirectory(Source/Graphics)
