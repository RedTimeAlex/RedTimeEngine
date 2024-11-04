cmake_minimum_required(VERSION 3.5)

project(RTE-Graphics LANGUAGES CXX)

add_library(${PROJECT_NAME} Window.cpp)

target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_SOURCE_DIR}/Headers)

include(GNUInstallDirs)

install(TARGETS ${PROJECT_NAME} DESTINATION ${CMAKE_INSTALL_LIBDIR})
