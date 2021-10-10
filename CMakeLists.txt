cmake_minimum_required(VERSION 3.20)
project(ABC)

set(CMAKE_CXX_STANDARD 14)

add_executable(ABC main.cpp plant.cpp plant.h tree.cpp tree.h bush.cpp bush.h flower.cpp flower.h rnd.h container.cpp container.h)
