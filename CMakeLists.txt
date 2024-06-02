cmake_minimum_required(VERSION 3.22.1)
project(Raytracer)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# add source and header file directories to variables
set(SRC_DIR "${PROJECT_SOURCE_DIR}/src")
set(INCLUDE_DIR "${PROJECT_SOURCE_DIR}/include")
set(TEST_DIR "${PROJECT_SOURCE_DIR}/test")

# get all source and header files recursively into variables
file(GLOB_RECURSE SOURCES "${SRC_DIR}/*.cpp")
file(GLOB_RECURSE HEADERS "${INCLUDE_DIR}/*.h")

# include directories
include_directories(${INCLUDE_DIR})

# create a library for the main project - eventually used for testing I think
add_library(RaytracerLib ${SOURCES} ${HEADERS})

# add the executable for the main project
add_executable(Raytracer ${SOURCES} ${HEADERS})

# TODO: Figure out how to use google tests properly
# include(FetchContent)
# FetchContent_Declare(
#   googletest
#   URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
# )
# # for Windows: Prevent overriding the parent project's compiler/linker settings
# set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
# FetchContent_MakeAvailable(googletest)

# # enable testing
# enable_testing()

# # add test source files
# file(GLOB_RECURSE TEST_SOURCES "${TEST_DIR}/*.cpp")

# # create a test executable
# add_executable(RaytracerTests ${TEST_SOURCES})

# # link the GoogleTest libraries and the main project library to the test executable
# target_link_libraries(RaytracerTests gtest gtest_main RaytracerLib)

# # add test
# add_test(NAME RaytracerTests COMMAND RaytracerTests)
