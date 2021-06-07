#ifndef EX01_AWEAPON_HPP
#define EX01_AWEAPON_HPP

#include <iostream>

class AWeapon {
private:
	std::string _name;
	int _apcost;
	int _damage;
public:
	AWeapon(const std::string &name, int apcost, int damage);
	AWeapon(AWeapon const &weapon);
	AWeapon();

	virtual ~AWeapon();
	virtual void attack() const = 0;

	const std::string &getName() const;
	int getApcost() const;
	int getDamage() const;
	AWeapon &operator=(AWeapon const &weapon);
};


#endif //EX01_AWEAPON_HPP
