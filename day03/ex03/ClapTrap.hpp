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
	ClapTrap(std::string const &name);
	ClapTrap(const ClapTrap& trap);


	void setHitPoints(unsigned int hitPoints);
	void setMaxHitPoints(unsigned int maxHP);
	void setEnergyPoints(unsigned int energyPoints);
	void setMaxEnergyPoints(unsigned int maxEnergy);
	void setLevel(unsigned int lvl);
	void setName(const std::string &name);
	void setMeleeAttackDamage(unsigned int AttackDamage);
	void setRangedAttackDamage(unsigned int AttackDamage);
	void setArmorDamageReduction(unsigned int DamageReduction);


	unsigned int getHitPoints() const;
	unsigned int getMaxHitPoints() const;
	unsigned int getEnergyPoints() const;
	unsigned int getMaxEnergyPoints() const;
	unsigned int getLevel() const;
	const std::string &getName() const;
	unsigned int getMeleeAttackDamage() const;
	unsigned int getRangedAttackDamage() const;
	unsigned int getArmorDamageReduction() const;

	void rangedAttack(std::string &target);
	void meleeAttack(std::string &target);
	void takeDamage(unsigned  int amount);
	void beRepaired(unsigned int amount);
	ClapTrap &operator=(ClapTrap const &right);

protected:
	virtual std::string _announcePrefix();
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
