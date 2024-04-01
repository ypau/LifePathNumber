cmake_minimum_required(VERSION 3.12)

project(LifePathNumberDemo)

# Create the executable
add_executable(${PROJECT_NAME}  LifePathNumberDemo.cpp)

target_link_libraries(${PROJECT_NAME} LifePathNumber)