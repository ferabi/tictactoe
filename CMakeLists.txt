cmake_minimum_required(VERSION 3.22)
set(CMAKE_CXX_STANDARD 17)
project(ticgame VERSION 1.0.0)

add_library(
    grid 
    grid.h 
    grid.cpp
)

add_executable(tictactoe main.cpp)
target_link_libraries(tictactoe PRIVATE grid)