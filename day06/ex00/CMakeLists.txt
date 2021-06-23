cmake_minimum_required(VERSION 3.19)
project(ex00)
add_link_options(-Wall -Wextra -Werror)

set(CMAKE_CXX_STANDARD 98)

add_executable(ex00 main.cpp Convert.cpp Convert.hpp)