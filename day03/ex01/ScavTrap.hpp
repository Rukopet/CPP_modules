#ifndef EX01_SCAVTRAP_HPP
#define EX01_SCAVTRAP_HPP

#include <iostream>

class ScavTrap {
	unsigned int HitPoints;
	unsigned int maxHitPoints;
	unsigned int EnergyPoints;
	unsigned int maxEnergyPoints;
	unsigned int level;
	std::string Name;
	unsigned int meleeAttackDamage;
	unsigned int rangedAttackDamage;
	unsigned int armorDamageReduction;
public:
	ScavTrap(const std::string &name);
	void rangedAttack(std::string &target);
	void meleeAttack(std::string &target);
	void takeDamage(unsigned  int amount);
	void beRepaired(unsigned int amount);
	void challengeNewcomer();
	virtual ~ScavTrap();

};


#endif //EX01_SCAVTRAP_HPP
