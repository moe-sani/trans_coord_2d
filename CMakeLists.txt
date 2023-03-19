cmake_minimum_required(VERSION 3.10)
project(my_project)

 
find_package (Eigen3 3.3 REQUIRED NO_MODULE)
set(CMAKE_CXX_STANDARD 11)

set(SOURCES main.cpp transformer.cpp transformer.h)
add_executable(myProject ${SOURCES})
target_link_libraries (myProject Eigen3::Eigen)
