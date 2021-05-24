#ifndef EX06_HUMANA_HPP
#define EX06_HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
public:
	HumanA(const std::string &name, const Weapon& weapon);

	void setName(const std::string &name);
	void setType(const std::string &weaponType);

	void attack();

private:

	const Weapon &_Weapon;
	std::string _name;
	std::string _Type;
	const std::string &getName() const;
	const std::string &getType() const;
	const Weapon &getWeapon() const;
};


#endif //EX06_HUMANA_HPP
