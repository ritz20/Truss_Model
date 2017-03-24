cmake_minimum_required(VERSION 3.3)

project(Truss_Model CXX)
set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES src/main.cpp src/vector_functions.h
        src/Force.h src/Force.cpp
        src/member.h src/member.cpp
        src/node.h src/node.cpp
        src/truss.h src/truss.cpp)

add_executable(main ${SOURCE_FILES})
