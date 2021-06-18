cmake_minimum_required(VERSION 3.17.5)
project(ex03)

set(CMAKE_CXX_STANDARD 98)

add_executable(ex03 main.cpp IMateriaSource.hpp AMateria.cpp AMateria.hpp ICharacter.hpp Ice.cpp Ice.hpp Cure.cpp Cure.hpp Character.cpp Character.hpp MateriaSource.cpp MateriaSource.hpp)