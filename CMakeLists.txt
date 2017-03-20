cmake_minimum_required(VERSION 3.3)

project(Truss_Model CXX)
set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES src/main.cpp src/truss.h src/truss.cpp
        src/node.h src/node.cpp
        src/member.h src/member.cpp
        src/Force.h src/Force.cpp)

add_executable(main ${SOURCE_FILES})
