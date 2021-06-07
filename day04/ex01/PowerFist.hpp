#ifndef EX01_POWERFIST_HPP
#define EX01_POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist : public AWeapon {
public:
	PowerFist(const PowerFist &weapon);
	PowerFist();
	virtual void attack() const;
	PowerFist &operator=(const PowerFist& op);
};


#endif //EX01_POWERFIST_HPP
