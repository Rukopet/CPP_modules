#ifndef EX06_HUMANB_HPP
#define EX06_HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
public:
	HumanB(const std::string &name);
	HumanB();
	~HumanB();

	void setName(const std::string &name);
	void setWeapon(Weapon &weapon);
	void setType(const std::string &weaponType);

	void attack();


private:
	std::string _name;
	std::string _Type;
	Weapon *_Weapon;
	const std::string &getName() const;
	const std::string &getType() const;
	const Weapon &getWeapon() const;
	bool _bindFlag;
};


#endif //EX06_HUMANB_HPP
