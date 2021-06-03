#ifndef EX02_SCAVTRAP_HPP
#define EX02_SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap {
public:
	ScavTrap(const std::string &name);
	void rangedAttack(std::string &target);
	void meleeAttack(std::string &target);
	void takeDamage(unsigned  int amount);
	void beRepaired(unsigned int amount);
	void challengeNewcomer();
	virtual ~ScavTrap();

};


#endif //EX02_SCAVTRAP_HPP
