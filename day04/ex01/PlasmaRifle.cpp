#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() :
AWeapon("Plasma Rifle", 5, 21) {}

void PlasmaRifle::attack() const {
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &weapon) :
AWeapon(weapon) {}

PlasmaRifle &PlasmaRifle::operator=(const PlasmaRifle &op) {
	AWeapon::operator=(op);
	return *this;
}

PlasmaRifle::~PlasmaRifle() { std::cout << "plasme rifle destructor" << std::endl; }
