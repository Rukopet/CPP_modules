#include "SuperTrap.hpp"

SuperTrap::SuperTrap(const std::string &name) :
ClapTrap(100, 100,
		 120, 120,
		 1, name,
		 60, 30, 5),
FragTrap(name), NinjaTrap(name) {
	std::cout << "\"ClapTrap the BEST in SUUUUUPER TRAAP ±\"" << std::endl;
}

std::string SuperTrap::_announcePrefix() {
	return "SP3R-TP ";
}

SuperTrap::~SuperTrap() {
	std::cout << "PRESS \"F\" TO SUPPER TRAP" << std::endl;
}
