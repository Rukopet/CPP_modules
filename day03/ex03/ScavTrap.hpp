#ifndef EX03_SCAVTRAP_HPP
#define EX03_SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap {
	std::string _announcePrefix();
public:
	ScavTrap(const std::string &name);
	ScavTrap(const ScavTrap &trap);
	ScavTrap();
	void challengeNewcomer();
	virtual ~ScavTrap();
	ScavTrap &operator=(const ScavTrap& trap);
};

#endif //EX03_SCAVTRAP_HPP