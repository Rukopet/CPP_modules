#include "Character.hpp"


Character::Character(const std::string &name) :
		_ap(40), _name(name), _weapon(0) {}
Character::Character(const Character &weapon) :
 _ap(weapon.getAp()), _name(weapon.getName()), _weapon(0) {}
Character::Character() : _ap(40), _name(), _weapon(0) {}
Character::~Character() {std::cout << "character destrucor" << std::endl;}

Character & Character::operator=(const Character& op)
{
	this->_ap = op.getAp();
	this->_name = op.getName();
	return (*this);
}

std::ostream &operator<<(std::ostream &os, const Character &character) {
	if (character.getWeapon() == 0)
		os << character.getName() << " has " << character.getAp() << " AP and is unarmed" << std::endl;
	else
		os << character.getName() << " has " << character.getAp() << " AP and wields " << character.getWeapon()->getName() << std::endl;
	return os;
}

void Character::recoverAP() {
	this->_ap = (10 + this->_ap > 40) ? 40 : 10 + this->_ap;
}

void Character::equip(AWeapon *weapon) {
	this->_weapon = weapon;
}

void Character::attack(Enemy *enemy) {
	if (this->_weapon == 0)
		return;
	if ((int)this->_ap >= this->_weapon->getApcost())
	{
		std::cout << this->_name << " attacks " << enemy->getType() << " with a " << this->_weapon->getName() << std::endl;
		this->_weapon->attack();
		enemy->takeDamage(this->_weapon->getDamage());
		this->_ap -= this->_weapon->getApcost();
		if (enemy->getHp() <= 0)
			delete enemy;
	}
}


AWeapon *Character::getWeapon() const {
	return _weapon;
}
unsigned int Character::getAp() const {
	return _ap;
}
void Character::setAp(unsigned int ap) {
	_ap = ap;
}
const std::string &Character::getName() const {
	return _name;
}
void Character::setName(const std::string &name) {
	_name = name;
}


