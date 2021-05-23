#include "ZombieHorde.hpp"

const std::string ZombieHorde::NameZombiesArrayPointers[10] = {"budz" , "pain" , "konan",\
	"nagato", "itachi", "tobi", "madara", "naruto", "danzou", "kakashi"};


ZombieHorde::ZombieHorde(int amountZombies) : _amountZombies(amountZombies) {
	Zombie *Zombies = new Zombie[_amountZombies];
	for (int i = 0; i < amountZombies; ++i)
	{
		int r = std::rand() % 10;
		Zombies[i].setName(NameZombiesArrayPointers[r]);
	}
	setZombiesPointer(Zombies);
}

ZombieHorde::~ZombieHorde() {
	int len = getAmountZombies();
	for (int i = 0; i < len; ++i)
	{
		this->_zombiesPointer[i].setZombieType(this->_zombieType);
		this->_zombiesPointer[i].announce();
	}
	delete[] getZombiesPointer();
}

// GETTERS

int ZombieHorde::getAmountZombies() const {
	return _amountZombies;
}
const std::string &ZombieHorde::getZombieType() const {
	return _zombieType;
}
Zombie *ZombieHorde::getZombiesPointer() const {
	return _zombiesPointer;
}


// SETTERS

void ZombieHorde::setAmountZombies(int amountZombies) {
	_amountZombies = amountZombies;
}
void ZombieHorde::setZombieType(const std::string &zombieType) {
	_zombieType = zombieType;
}
void ZombieHorde::setZombiesPointer(Zombie *zombiesPointer) {
	_zombiesPointer = zombiesPointer;
}
