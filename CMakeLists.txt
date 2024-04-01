cmake_minimum_required(VERSION 3.12)
project(LifePathNumber)

set(CMAKE_CXX_STANDARD 17)

# Set the source files for the library
set(SOURCES src/LifePathNumber.cpp)

# Create the library target as a shared library
add_library(LifePathNumber SHARED ${SOURCES})

# Set the include directories if needed
target_include_directories(LifePathNumber PUBLIC include)

add_subdirectory(test)
add_subdirectory(demo)