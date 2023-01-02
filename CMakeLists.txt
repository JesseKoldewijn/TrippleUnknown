cmake_minimum_required(VERSION 3.17)
project(TrippleUnknown)

set(CMAKE_CXX_STANDARD 20)

add_executable(TrippleUnknown main.cpp src/Game.hpp src/Game.cpp src/Game.hpp src/Difficulty.cpp src/Difficulty.hpp)