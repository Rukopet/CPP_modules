cmake_minimum_required(VERSION 3.17.5)
project(ex04)

set(CMAKE_CXX_STANDARD 98)

add_executable(ex04 main.cpp FragTrap.cpp FragTrap.hpp ScavTrap.cpp ScavTrap.hpp ClapTrap.cpp ClapTrap.hpp NinjaTrap.cpp NinjaTrap.hpp SuperTrap.cpp SuperTrap.hpp)