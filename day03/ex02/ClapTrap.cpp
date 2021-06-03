#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : HitPoints(0), maxHitPoints(0), EnergyPoints(0),
maxEnergyPoints(0), level(0), Name(""), meleeAttackDamage(0), rangedAttackDamage(0),
armorDamageReduction(0) {
	std::cout << "\"ClapTrap not the BEST±, but still good\"" << std::endl;

};

ClapTrap::ClapTrap(unsigned int hitPoints,
unsigned int maxHitPoints,
unsigned int energyPoints,
unsigned int maxEnergyPoints,
unsigned int level,
const std::string &name,
unsigned int meleeAttackDamage,
unsigned int rangedAttackDamage,
unsigned int armorDamageReduction) : HitPoints(hitPoints),
maxHitPoints(maxHitPoints), EnergyPoints(energyPoints),
maxEnergyPoints(maxEnergyPoints), level(level), Name(name),
meleeAttackDamage(meleeAttackDamage), rangedAttackDamage(rangedAttackDamage),
armorDamageReduction(armorDamageReduction) {
	std::cout << "\"ClapTrap the BEST±\"" << std::endl;
}





void ClapTrap::setHitPoints(unsigned int hitPoints) {
	HitPoints = hitPoints;
}
void ClapTrap::setMaxHitPoints(unsigned int maxHitPoints) {
	ClapTrap::maxHitPoints = maxHitPoints;
}
void ClapTrap::setEnergyPoints(unsigned int energyPoints) {
	EnergyPoints = energyPoints;
}
void ClapTrap::setMaxEnergyPoints(unsigned int maxEnergyPoints) {
	ClapTrap::maxEnergyPoints = maxEnergyPoints;
}
void ClapTrap::setLevel(unsigned int level) {
	ClapTrap::level = level;
}
void ClapTrap::setName(const std::string &name) {
	Name = name;
}
void ClapTrap::setMeleeAttackDamage(unsigned int meleeAttackDamage) {
	ClapTrap::meleeAttackDamage = meleeAttackDamage;
}
void ClapTrap::setRangedAttackDamage(unsigned int rangedAttackDamage) {
	ClapTrap::rangedAttackDamage = rangedAttackDamage;
}
void ClapTrap::setArmorDamageReduction(unsigned int armorDamageReduction) {
	ClapTrap::armorDamageReduction = armorDamageReduction;
};




unsigned int ClapTrap::getHitPoints() const {
	return HitPoints;
}
unsigned int ClapTrap::getMaxHitPoints() const {
	return maxHitPoints;
}
unsigned int ClapTrap::getEnergyPoints() const {
	return EnergyPoints;
}
unsigned int ClapTrap::getMaxEnergyPoints() const {
	return maxEnergyPoints;
}
unsigned int ClapTrap::getLevel() const {
	return level;
}
const std::string &ClapTrap::getName() const {
	return Name;
}
unsigned int ClapTrap::getMeleeAttackDamage() const {
	return meleeAttackDamage;
}
unsigned int ClapTrap::getRangedAttackDamage() const {
	return rangedAttackDamage;
}
unsigned int ClapTrap::getArmorDamageReduction() const {
	return armorDamageReduction;
}
