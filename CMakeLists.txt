cmake_minimum_required(VERSION 3.12)
project(LifePathNumber)

set(CMAKE_CXX_STANDARD 17)

# Set the source files for the library
set(SOURCES src/LifePathNumber.cpp)

# Create the library target as a shared library
add_library(LifePathNumber SHARED ${SOURCES})

# Set the version number
set_target_properties(LifePathNumber PROPERTIES VERSION 1.0 SOVERSION 1)

# Set the include directories if needed
target_include_directories(LifePathNumber PUBLIC include)

# Install the library to lib directory
install(TARGETS LifePathNumber LIBRARY DESTINATION lib)

# Install the symlink for the development package
install(CODE "execute_process(COMMAND ${CMAKE_COMMAND} -E create_symlink
    ${CMAKE_INSTALL_PREFIX}/lib/libLifePathNumber.so.1
    ${CMAKE_INSTALL_PREFIX}/lib/libLifePathNumber.so)")

add_subdirectory(test)
add_subdirectory(demo)