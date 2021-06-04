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


void ClapTrap::rangedAttack(std::string &target) {
	std::cout << _announcePrefix() << this->Name << " attacks " << target << " at range, causing "
			  << this->rangedAttackDamage << " points of damage!" << std::endl;
	std::cout << _announcePrefix() << this->Name << ": \"Snoiped!\"" << std::endl;
}

void ClapTrap::meleeAttack(std::string &target) {
	std::cout << _announcePrefix() << this->Name << " attacks " << target << " at melee, causing "
			  << this->rangedAttackDamage << " points of damage!" << std::endl;
	std::cout << _announcePrefix() << this->Name << ": \"Ready for the PUNCHline?!\"" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	amount = (amount < this->armorDamageReduction) ? 0 : amount - this->armorDamageReduction;
	int current = (this->HitPoints < amount) ? 0 : (int)this->HitPoints - (int)amount;
	if (current == 0)
	{
		std::cout << _announcePrefix() << this->Name << " take " << amount << " damage" << ", health has become |"
				  << "0\\" << this->maxHitPoints << "  SO DEEEAD!" << std::endl;
		std::cout << _announcePrefix() << this->Name << ": \"Oh. My. God. What if I'm like... a fish? And, if I'm not moving... I stop breathing? AND THEN I'LL DIE! HELP ME! HELP MEEEEE HEE HEE HEEE! HHHHHHHELP!\"" << std::endl;
	}
	else
	{
		this->HitPoints = (unsigned int)current;
		std::cout << _announcePrefix() << this->Name << " take " << amount << " damage" << ", health has become |"
				  << current << "\\" << this->maxHitPoints << std::endl;
		std::cout << _announcePrefix() << this->Name << ": \"I'm too pretty to die!\"" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	this->HitPoints = (amount + this->HitPoints > this->maxHitPoints) ? 100 : amount + this->HitPoints;
	std::cout << _announcePrefix() << this->Name << " repaired by " << amount << " hp" << ", health has become | "
			  << this->HitPoints << "\\" << this->maxHitPoints << std::endl;
	std::cout << _announcePrefix() << this->Name << ": \"Good as new, I think. Am I leaking?\"" << std::endl;
}


std::string ClapTrap::_announcePrefix() {
	return "CL4P_TP ";
}


void ClapTrap::setHitPoints(unsigned int hitPoints) {
	HitPoints = hitPoints;
}
void ClapTrap::setMaxHitPoints(unsigned int maxHP) {
	ClapTrap::maxHitPoints = maxHP;
}
void ClapTrap::setEnergyPoints(unsigned int energyPoints) {
	EnergyPoints = energyPoints;
}
void ClapTrap::setMaxEnergyPoints(unsigned int maxEnergy) {
	ClapTrap::maxEnergyPoints = maxEnergy;
}
void ClapTrap::setLevel(unsigned int lvl) {
	ClapTrap::level = lvl;
}
void ClapTrap::setName(const std::string &name) {
	Name = name;
}
void ClapTrap::setMeleeAttackDamage(unsigned int AttackDamage) {
	ClapTrap::meleeAttackDamage = AttackDamage;
}
void ClapTrap::setRangedAttackDamage(unsigned int AttackDamage) {
	ClapTrap::rangedAttackDamage = AttackDamage;
}
void ClapTrap::setArmorDamageReduction(unsigned int DamageReduction) {
	ClapTrap::armorDamageReduction = DamageReduction;
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
