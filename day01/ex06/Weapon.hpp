#ifndef EX06_WEAPON_HPP
#define EX06_WEAPON_HPP

#include <iostream>

class Weapon {
public:
	Weapon(const std::string &weaponType);
	Weapon();
	void setType(const std::string &weaponType);
	const std::string &getType() const;

private:
	std::string _Type;
};


#endif //EX06_WEAPON_HPP
