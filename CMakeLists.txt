cmake_minimum_required(VERSION 3.10)

project(HelloTest VERSION 1.0)


set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror -std=c++17")
set(test_dir "${PROJECT_SOURCE_DIR}/test")

file (GLOB test_files "${test_dir}/*_test.cpp")
# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Link runTests with what we want to test and the GTest and pthread library
add_executable(runTests.out "${test_dir}/hello_test.cpp")

target_link_libraries(runTests.out ${GTEST_LIBRARIES} pthread)
