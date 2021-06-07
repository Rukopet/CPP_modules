#ifndef EX01_PLASMARIFLE_HPP
#define EX01_PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {
public:
	PlasmaRifle(const PlasmaRifle &weapon);
	PlasmaRifle();

	virtual void attack() const;
	PlasmaRifle &operator=(const PlasmaRifle& op);
};


#endif //EX01_PLASMARIFLE_HPP
