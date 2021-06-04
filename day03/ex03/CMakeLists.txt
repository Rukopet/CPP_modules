cmake_minimum_required(VERSION 3.19)
project(ex03)

set(CMAKE_CXX_STANDARD 98)

add_executable(ex03 main.cpp FragTrap.cpp FragTrap.hpp ScavTrap.cpp ScavTrap.hpp ClapTrap.cpp ClapTrap.hpp NinjaTrap.cpp NinjaTrap.hpp)