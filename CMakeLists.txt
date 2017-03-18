cmake_minimum_required(VERSION 3.3)
project(Truss_Model CXX)

add_executable(main src/main.cpp src/truss.h src/truss.cpp
        src/node.h src/node.cpp src/member.h src/member.cpp src/Force.h src/Force.cpp)