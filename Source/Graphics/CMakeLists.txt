cmake_minimum_required(VERSION 3.5)

project(DAE-Graphics LANGUAGES CXX)

add_library(${PROJECT_NAME} Window.cpp)

target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_SOURCE_DIR}/Headers)

install(TARGETS ${PROJECT_NAME} DESTINATION ${CMAKE_INSTALL_LIBDIR})
