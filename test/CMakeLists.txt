cmake_minimum_required(VERSION 3.12)
project(LifePathNumberTest)

set(CMAKE_CXX_STANDARD 11)

# Add the executable target
add_executable(LifePathNumberTest LifePathNumberTest.cpp)

target_link_libraries(${PROJECT_NAME} LifePathNumber)