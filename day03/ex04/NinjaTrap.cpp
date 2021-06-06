#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(const std::string &name) :
		ClapTrap(60, 60, 120, 120, 1, name, 60, 5, 0) {
	std::cout << "\"ClapTrap the BEST in NINJA-TP ±\"" << std::endl;
}

NinjaTrap::NinjaTrap() : ClapTrap() {std::cout << "STD CONSTR NINJA" << std::endl; }

NinjaTrap::NinjaTrap(const NinjaTrap &trap) : ClapTrap(trap) { std::cout << "COPY CONSTR NINJA" << std::endl; }

std::string NinjaTrap::_announcePrefix() {
	return "NINJA-TP ";
}

NinjaTrap::~NinjaTrap() {
	std::cout << "ByBy Ninja !!" << std::endl;
}

void NinjaTrap::ninjaShoebox(ClapTrap &trap) {
	std::cout << _announcePrefix() << this->Name << " throw rock to " << trap.getName() << ", causing "
			  << 0 << " points of damage!" << std::endl;
	trap.takeDamage(0);
}

void NinjaTrap::ninjaShoebox(FragTrap &trap) {
	std::cout << _announcePrefix() << this->Name << " dirty names " << trap.getName() << std::endl;
	trap.vaulthunter_dot_exe(this->Name);
}

void NinjaTrap::ninjaShoebox(ScavTrap &trap) {
	std::cout << _announcePrefix() << this->Name << " pushes into mud " << trap.getName() << std::endl;
	std::cout << trap.getName() << " - << angry >> " << std::endl;
	trap.challengeNewcomer();
}

void NinjaTrap::ninjaShoebox(NinjaTrap &trap) {
	std::cout << _announcePrefix() << this->Name\
	<< " exchanges experience with " << trap.Name << " and increases its level, yes, you can exchange experience with yourself :D" << std::endl;
	this->level += 1;
}

NinjaTrap &NinjaTrap::operator=(const NinjaTrap& trap)
{
	if (this == &trap)
		return (*this);
	ClapTrap::operator=(trap);
	return (*this);
}