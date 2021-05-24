#include "Weapon.hpp"

Weapon::Weapon(const std::string &weaponType) : _Type(weaponType) {}

Weapon::Weapon() {
	setType("FUUUURY FISTS");
}

void Weapon::setType(const std::string &weaponType) {
	Weapon::_Type = weaponType;
}

const std::string &Weapon::getType() const {
	return _Type;
}
