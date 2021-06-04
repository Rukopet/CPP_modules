#ifndef EX02_SCAVTRAP_HPP
#define EX02_SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap {
	std::string _announcePrefix();
public:
	ScavTrap(const std::string &name);
	void challengeNewcomer();
	virtual ~ScavTrap();
};

#endif //EX02_SCAVTRAP_HPP