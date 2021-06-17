#include "SuperMutant.hpp"

SuperMutant::SuperMutant() :
Enemy("Super mutant", 170) { std::cout <<  "Gaaah. Me want smash heads!" << std::endl;}

SuperMutant::SuperMutant(SuperMutant const &mutant) :
Enemy(mutant) { std::cout <<  "Gaaah. Me want smash heads!" << std::endl;}

SuperMutant::~SuperMutant() { std::cout <<  "Aaargh..." << std::endl;}

SuperMutant &SuperMutant::operator=(SuperMutant const &weapon)
{
	Enemy::operator=(weapon);
	return *this;
}

void SuperMutant::takeDamage(int damage) {
	if (damage - 3 <= 0)
		return;
	damage -= 3;
	Enemy::takeDamage(damage);
}
