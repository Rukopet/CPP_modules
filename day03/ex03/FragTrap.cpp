#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string &name) :
ClapTrap(100, 100, 100, 100, 1, name, 30, 20, 5) {
	std::cout << "\"ClapTrap the BEST in FR4G-TP ±\"" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "\"Turning off the optics... they can't see me...\"" << std::endl;
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
	&FragTrap::beatboxAttack, &FragTrap::stupidjokesAttack, &FragTrap::panicAttack};
	funcs a = &FragTrap::prologueAttack;
	(this->*attacks[attackType])(target);
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

std::string FragTrap::_announcePrefix()  {
	return "FR4G-TP ";
}
