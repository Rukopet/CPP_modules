#include "Character.hpp"

#include "AMateria.hpp"

Character::Character(const std::string &name) : _name(name) {
	_inventory[0] = 0;
	_inventory[1] = 0;
	_inventory[2] = 0;
	_inventory[3] = 0;
}

Character::~Character() {
	for (int i = 0; i < 4; ++i)
	{
		if (_inventory[i] != 0)
		{
			delete _inventory[i];
			_inventory[i] = 0;
		}
	}
}

Character::Character(const Character &name) {
	Character::operator=(name);
}

const std::string &Character::getName() const {
	return _name;
}

void Character::use(int idx, ICharacter &target) {
	if (_inventory[idx] != 0)
	{
		_inventory[idx]->use(target);
	}
}

void Character::equip(AMateria *item) {
	int idx = -1;
	for (int i = 0; i != 4; ++i)
	{
		if (_inventory[i] == 0)
		{
			idx = i;
			break;
		}
	}
	if (idx == -1)
		return;
	_inventory[idx] = item;
}

void Character::unequip(int idx) {
	if (idx >= 0 && idx <= 3)
		_inventory[idx] = 0;
}

Character &Character::operator=(const Character &op) {
	for (int i = 0; i < 4; ++i) {if (this->_inventory[i] != 0) delete
	this->_inventory[i]; this->_inventory[i] = 0;};
	for (int i = 0; i < 4; ++i) {this->_inventory[i] = op._inventory[i];};
	this->_name = op._name;
	return *this;
}
