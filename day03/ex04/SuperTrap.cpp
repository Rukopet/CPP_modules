#include "SuperTrap.hpp"

SuperTrap::SuperTrap(const std::string &name) : ClapTrap(name), FragTrap(name),
NinjaTrap(name) {
	this->HitPoints = this->FragTrap::HitPoints;
	this->maxHitPoints = this->FragTrap::maxHitPoints;
	this->EnergyPoints = this->NinjaTrap::EnergyPoints;
	this->maxEnergyPoints = this->NinjaTrap::maxEnergyPoints;
	this->meleeAttackDamage = this->NinjaTrap::meleeAttackDamage;
	this->rangedAttackDamage = this->FragTrap::rangedAttackDamage;
	this->armorDamageReduction = this->FragTrap::armorDamageReduction;
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