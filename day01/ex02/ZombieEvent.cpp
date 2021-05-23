#include "ZombieEvent.hpp"

const std::string ZombieEvent::_NameArray[10] = {"budz" , "pain" , "konan",\
	"nagato", "itachi", "tobi", "madara", "naruto", "danzou", "kakashi"};

ZombieEvent::ZombieEvent() {}
ZombieEvent::ZombieEvent(const std::string &zombieType) : _zombieType(
		zombieType) {}


void ZombieEvent::randomChomp() {
	int r = std::rand() % 10;
	Zombie *tmpZombie = newZombie(_NameArray[r]);
	tmpZombie->announce();
}

Zombie *ZombieEvent::newZombie(std::string name) {
	std::string tmp = getZombieType();
	Zombie *newZombie = new Zombie(tmp);
	newZombie->setName(name);
	return newZombie;
}


// GETTERS
const std::string &ZombieEvent::getZombieType() const {
	return _zombieType;
}


// SETTERS
void ZombieEvent::setZombieType(const std::string &zombieType) {
	_zombieType = zombieType;
}

std::string ZombieEvent::randomMessage() {
	return std::string();
}
