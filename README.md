# startCppG

This is the startup template for a cpp project with google test.

### Structure

```
├── build.sh
├── CMakeLists.txt
├── hello.cpp
├── LICENSE
├── Makefile      //will get generated
├── README.md
├── runTests.out  //will get generated
└── test
    └── hello_test.cpp
```

### To get, build and run

```
git clone git@github.com:mrprajesh/startCppG.git
cd startCppG
./build.sh      # runs cmake!  Makefile is generated!
make            # runTests.out is generated
./runTests.out  # runs all the tests functions in test/hello_test.cpp folder
```

### Customize

```
cmake_minimum_required(VERSION 3.10)  # Even a 2.x would be good.

project(HelloTest VERSION 1.0)        # Current project name


set(CMAKE_CXX_STANDARD 17)            # https://cmake.org/cmake/help/latest/guide/tutorial/A%20Basic%20Starting%20Point.html#specify-the-c-standard
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror -std=c++17")

#~ set(src_dir "${PROJECT_SOURCE_DIR}/src")     ## TODO LATER
#~ file (GLOB test_files "${src_dir}/*.cpp")

set(test_dir "${PROJECT_SOURCE_DIR}/test")      ## testfiles in separete folder with _test suffix
file (GLOB test_files "${test_dir}/*_test.cpp

# Locate GTest -- Assuming installed locally    ## add GTest as submodule
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Link runTests with what we want to test and the GTest and pthread library
add_executable(runTests.out "${test_dir}/hello_test.cpp")               // change executable name runTests.out if required

target_link_libraries(runTests.out ${GTEST_LIBRARIES} pthread)

```
