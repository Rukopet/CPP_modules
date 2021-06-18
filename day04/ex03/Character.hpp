#ifndef EX03_CHARACTER_HPP
#define EX03_CHARACTER_HPP

#include "ICharacter.hpp"
#include <iostream>

class Character : public ICharacter {
public:
	Character(const std::string &name);
	void equip(AMateria *item);
	void unequip(int idx);

	virtual ~Character();

	const std::string &getName() const;
	void use(int idx, ICharacter &target);

	Character &operator=(const Character& op);
private:
	std::string _name;
	AMateria *_inventory[4];
};


#endif //EX03_CHARACTER_HPP
