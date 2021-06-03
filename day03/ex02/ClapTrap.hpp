#ifndef EX02_CLAPTRAP_HPP
#define EX02_CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
public:
	ClapTrap();
	ClapTrap(unsigned int hitPoints, unsigned int maxHitPoints,
			 unsigned int energyPoints, unsigned int maxEnergyPoints,
			 unsigned int level, const std::string &name,
			 unsigned int meleeAttackDamage, unsigned int rangedAttackDamage,
			 unsigned int armorDamageReduction);


	void setHitPoints(unsigned int hitPoints);
	void setMaxHitPoints(unsigned int maxHitPoints);
	void setEnergyPoints(unsigned int energyPoints);
	void setMaxEnergyPoints(unsigned int maxEnergyPoints);
	void setLevel(unsigned int level);
	void setName(const std::string &name);
	void setMeleeAttackDamage(unsigned int meleeAttackDamage);
	void setRangedAttackDamage(unsigned int rangedAttackDamage);
	void setArmorDamageReduction(unsigned int armorDamageReduction);


	unsigned int getHitPoints() const;
	unsigned int getMaxHitPoints() const;
	unsigned int getEnergyPoints() const;
	unsigned int getMaxEnergyPoints() const;
	unsigned int getLevel() const;
	const std::string &getName() const;
	unsigned int getMeleeAttackDamage() const;
	unsigned int getRangedAttackDamage() const;
	unsigned int getArmorDamageReduction() const;


protected:
	unsigned int HitPoints;
	unsigned int maxHitPoints;
	unsigned int EnergyPoints;
	unsigned int maxEnergyPoints;
	unsigned int level;
	std::string Name;
	unsigned int meleeAttackDamage;
	unsigned int rangedAttackDamage;
	unsigned int armorDamageReduction;
};


#endif //EX02_CLAPTRAP_HPP
