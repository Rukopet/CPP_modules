#include "Zombie.hpp"

Zombie::Zombie() {}
Zombie::Zombie(const std::string &zombieType) : zombieType(zombieType) {}


void Zombie::announce() {
	std::cout << "<" << getName() << " (" << getZombieType() << ")>";
	if (getZombieType() == "42")
		std::cout << " NORME ONE LOVE <3" << std::endl;
	else
		std::cout << " Braiiiiiiinnnssss..." << std::endl;
}


// GETTERS
const std::string &Zombie::getName() const {
	return _name;
}

const std::string &Zombie::getZombieType() const {
	return zombieType;
}



// SETTERS
void Zombie::setName(const std::string &name) {
	_name = name;
}

void Zombie::setZombieType(const std::string &zombieType) {
	Zombie::zombieType = zombieType;
}
