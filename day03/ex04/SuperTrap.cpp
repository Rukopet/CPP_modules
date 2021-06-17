#include "SuperTrap.hpp"

SuperTrap::SuperTrap(const std::string &name) : ClapTrap(name), FragTrap(name),
NinjaTrap(name) {
	this->HitPoints = FragTrap::stat_HitPoints;
	this->maxHitPoints = FragTrap::stat_MaxHitPoints;
	this->EnergyPoints = NinjaTrap::stat_EnergyPoints;
	this->maxEnergyPoints = NinjaTrap::stat_MaxEnergyPoints;
	this->meleeAttackDamage = NinjaTrap::stat_MeleeAttackDamage;
	this->rangedAttackDamage = FragTrap::stat_RangedAttackDamage;
	this->armorDamageReduction = FragTrap::stat_ArmorDamageReduction;
	std::cout << "\"ClapTrap the BEST in SUUUUUPER TRAAP ±\"" << std::endl;
}

SuperTrap::SuperTrap() : ClapTrap(), FragTrap(), NinjaTrap()
{
}

SuperTrap::SuperTrap(SuperTrap const &other) : ClapTrap(other),
NinjaTrap(other), FragTrap(other)
{
	std::cout << "super-pupper copy constructor" << std::endl;
}

std::string SuperTrap::_announcePrefix() {
	return "SP3R-TP ";
}

SuperTrap::~SuperTrap() {
	std::cout << "PRESS \"F\" TO SUPPER TRAP" << std::endl;
}

SuperTrap &SuperTrap::operator=(const SuperTrap& trap)
{
	if (this == &trap)
		return (*this);
	ClapTrap::operator=(trap);
	return (*this);
}