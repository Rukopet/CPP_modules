#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, const Weapon& weapon) : _Weapon
(weapon), _name(name) {
	setType(_Weapon.getType());
}



void HumanA::setName(const std::string &name) {
	_name = name;
}
void HumanA::setType(const std::string &weaponType) {
	_Type = weaponType;
}




void HumanA::attack() {
	std::cout << getName() << " attacks with his " << getWeapon().getType()
	<< std::endl;
}




const Weapon &HumanA::getWeapon() const {
	return _Weapon;
}
const std::string &HumanA::getName() const {
	return _name;
}
const std::string &HumanA::getType() const {
	return _Type;
}
