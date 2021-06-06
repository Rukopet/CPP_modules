#ifndef EX00_FRAGTRAP_HPP
#define EX00_FRAGTRAP_HPP

#include <iostream>


class FragTrap {
	unsigned int HitPoints;
	unsigned int maxHitPoints;
	unsigned int EnergyPoints;
	unsigned int maxEnergyPoints;
	unsigned int level;
	std::string Name;
	unsigned int meleeAttackDamage;
	unsigned int rangedAttackDamage;
	unsigned int armorDamageReduction;
	void prologueAttack(const std::string &target);
	void annoyingAttack(const std::string &target);
	void beatboxAttack(const std::string &target);
	void stupidjokesAttack(const std::string &target);
	void panicAttack(const std::string &target);
public:
	FragTrap(const std::string &name);
	FragTrap(const FragTrap& trap);
	FragTrap();
	virtual ~FragTrap();
	void rangedAttack(std::string &target);
	void meleeAttack(std::string &target);
	void takeDamage(unsigned  int amount);
	void beRepaired(unsigned int amount);
	void vaulthunter_dot_exe(std::string const &target);
	unsigned int getRangedAttackDamage() const;
	FragTrap &operator=(FragTrap const &right);
};

typedef void(FragTrap::*funcs) (const std::string &target);
#endif //EX00_FRAGTRAP_HPP
