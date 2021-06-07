#include "AWeapon.hpp"

AWeapon::AWeapon() {}

AWeapon::AWeapon(const std::string &name, int apcost, int damage) :
_name(name), _apcost(apcost), _damage(damage) {}

AWeapon::AWeapon(AWeapon const &weapon) :
_name(weapon.getName()), _apcost(weapon.getApcost()), _damage(weapon.getDamage()) {};

AWeapon::~AWeapon() {}


AWeapon &AWeapon::operator=(AWeapon const &weapon)
{
	this->_damage = weapon.getDamage();
	this->_apcost = weapon.getApcost();
	this->_name = weapon.getName();
	return *this;
}

const std::string &AWeapon::getName() const {
	return _name;
}
int AWeapon::getApcost() const {
	return _apcost;
}
int AWeapon::getDamage() const {
	return _damage;
}

