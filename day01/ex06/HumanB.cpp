#include "HumanB.hpp"

HumanB::HumanB(const std::string &name) : _name(name) {
}

HumanB::HumanB() {
	setType("FUUURY FISTS");
	_bindFlag = true;
}

HumanB::~HumanB() {
}


void HumanB::setName(const std::string &name) {
	_name = name;
}
void HumanB::setWeapon(Weapon &weapon) {
	_Weapon = &weapon;
	_bindFlag = false;
}
void HumanB::setType(const std::string &weaponType) {
	_Type = weaponType;
	_bindFlag = true;
}


const std::string &HumanB::getName() const {
	return _name;
}
const Weapon &HumanB::getWeapon() const {
	return *_Weapon;
}
const std::string &HumanB::getType() const {
	return _Type;
}



void HumanB::attack() {
	if (_bindFlag)
		std::cout << getName() << " attacks with his " << getType() << std::endl;
	else
		std::cout << getName() << " attacks with his " << getWeapon().getType() <<
		std::endl;
}
