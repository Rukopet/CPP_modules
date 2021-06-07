#ifndef EX01_CHARACTER_HPP
#define EX01_CHARACTER_HPP

#include <ostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character {
private:
	unsigned int _ap;
	std::string _name;
	AWeapon *_weapon;

public:
	Character(const std::string &name);
	Character(Character const &weapon);
	Character();

	unsigned int getAp() const;
	const std::string &getName() const;
	void setAp(unsigned int ap);
	void setName(const std::string &name);

	void recoverAP();
	void equip(AWeapon *weapon);
	void attack(Enemy *enemy);

	Character &operator=(const Character& op);
	AWeapon *getWeapon() const;

};


	std::ostream &operator<<(std::ostream &os, const Character &fixed);
#endif //EX01_CHARACTER_HPP
