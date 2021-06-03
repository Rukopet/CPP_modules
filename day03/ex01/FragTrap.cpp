#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string &name) : Name(name), HitPoints(100), maxHitPoints(100),
EnergyPoints(100), maxEnergyPoints(100), level(1), meleeAttackDamage(30), rangedAttackDamage(20),
armorDamageReduction(5) {
	std::cout << name << ": \"I am the best robot. Yeah, yeah, yeah, I am the "
					  "best robot. Ooh, ooh, here we go!\"" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "\"Turning off the optics... they can't see me...\"" << std::endl;
}

void FragTrap::rangedAttack(std::string &target) {
	std::cout << "FR4G-TP " << this->Name << " attacks " << target << " at range, causing "
	<< this->rangedAttackDamage << " points of damage!" << std::endl;
	std::cout << "FR4G-TP " << this->Name << ": \"Wow! You're not dead?\"" << std::endl;
}

void FragTrap::meleeAttack(std::string &target) {
	std::cout << "FR4G-TP " << this->Name << " attacks " << target << " at melee, causing "
			  << this->rangedAttackDamage << " points of damage!" << std::endl;
	std::cout << "FR4G-TP " << this->Name << ": \"Hey! Over here! I'm over heere!\"" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount) {
	amount = (amount < this->armorDamageReduction) ? 0 : amount - this->armorDamageReduction;
	int current = (this->HitPoints < amount) ? 0 : (int)this->HitPoints - (int)amount;
	if (current == 0)
	{
		std::cout << "FR4G-TP " << this->Name << " take " << amount << " damage" << ", health has become |"
		<< "0\\" << this->maxHitPoints << "  SO DEEEAD!" << std::endl;
		std::cout << "FR4G-TP " << this->Name << ": \"I can see... the code\"" << std::endl;
	}
	else
	{
		this->HitPoints = (unsigned int)current;
		std::cout << "FR4G-TP " << this->Name << " take " << amount << " damage" << ", health has become |"
		<< current << "\\" << this->maxHitPoints << std::endl;
		std::cout << "FR4G-TP " << this->Name << ": \"Oh my God, I'm leaking! I think I'm leaking! Ahhhh, I'm leaking! There's oil everywhere!\"" << std::endl;
	}
}

void FragTrap::beRepaired(unsigned int amount) {
	this->HitPoints = (amount + this->HitPoints > this->maxHitPoints) ? 100 : amount + this->HitPoints;
	std::cout << "FR4G-TP " << this->Name << " repaired by " << amount << " hp" << ", health has become | "
			  << this->HitPoints << "\\" << this->maxHitPoints << std::endl;
	std::cout << "FR4G-TP " << this->Name << ": \"Good as new, I think. Am I leaking?\"" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(const std::string &target) {
	if (this->EnergyPoints < 25)
	{
		std::cout << "WARNING! Not enough energy | " << this->EnergyPoints << "\\" << this->maxEnergyPoints << std::endl;
		std::cout << "FR4G-TP " << this->Name << ": \"Rrrrrgh...this isn't working!\"" << std::endl;
		return;
	}
	this->EnergyPoints -= 25;
	int attackType = std::rand() % 5;
	funcs attacks[] = {&FragTrap::prologueAttack, &FragTrap::annoyingAttack,
	&FragTrap::beatboxAttack, &FragTrap::stupidjokesAttack, &FragTrap::panicAttack};\
	(this->*attacks[attackType])(target);
}

unsigned int FragTrap::getRangedAttackDamage() const {
	return rangedAttackDamage;
}

void FragTrap::prologueAttack(const std::string &target) {
	std::cout << "FR4G-TP " << this->Name << " attacks " << target << " at prologue annoying attack, causing "
	<< 1 << " points of damage!" << std::endl;
	std::cout << "FR4G-TP " << this->Name << ": \"Did you find the Vault yet?\"" << std::endl;
}

void FragTrap::annoyingAttack(const std::string &target) {
	std::cout << "FR4G-TP " << this->Name << " attacks " << target << " at annoooooying attack, causing "
	<< 2 << " points of damage!" << std::endl;
	std::cout << "FR4G-TP " << this->Name << ": \"I'm over here!\"" << std::endl;
	std::cout << "FR4G-TP " << this->Name << ": \"Sure is lonely around here.\"" << std::endl;
	std::cout << "FR4G-TP " << this->Name << ": \"I'm over here!\"" << std::endl;
}

void FragTrap::beatboxAttack(const std::string &target) {
	std::cout << "FR4G-TP " << this->Name << " attacks " << target << " at BEatBoaXing attack, causing "
	<< 10 << " points of damage!" << std::endl;
	std::cout << "FR4G-TP " << this->Name << ": \"Wanna hear a new dubstep song I wrote? Wub! Wub\"" << std::endl;
	std::cout << "FR4G-TP " << this->Name << ": \"Unce! Unce! Unce! Unce! Ooo, oh check me out. Unce! Unce! Unce! Unce! Oh, come on get down.\" (beatboxing)" << std::endl;
}

void FragTrap::stupidjokesAttack(const std::string &target) {
	std::cout << "FR4G-TP " << this->Name << " attacks " << target << " at stupid jokes attack, causing "
	<< 50 << " points of damage!" << std::endl;
	std::cout << "FR4G-TP " << this->Name << ": \"Scooter asked me to tell you about a, uh, \"little sumthin' sumthin' \" he needs done. You should ask him about it!\"" << std::endl;
}

void FragTrap::panicAttack(const std::string &target) {
	std::cout << "FR4G-TP " << this->Name << " attacks " << target << " at panic attack, causing "
	<< 5 << " points of damage!" << std::endl;
	std::cout << "FR4G-TP " << this->Name << ": \"I'm detecting a motor unit malfunction... I can't move! I'm paralyzed with fear!\"" << std::endl;
}
