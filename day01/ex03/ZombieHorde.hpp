#ifndef EX03_ZOMBIEHORDE_HPP
#define EX03_ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class ZombieHorde {
public:
	ZombieHorde(int amountZombies);
	virtual ~ZombieHorde();
	void setAmountZombies(int amountZombies);
	void setZombieType(const std::string &zombieType);



private:
	int _amountZombies;
	std::string _zombieType;
	const std::string &getZombieType() const;
	int getAmountZombies() const;
	static const std::string NameZombiesArrayPointers[10];
	Zombie *_zombiesPointer;
	Zombie *getZombiesPointer() const;
	void setZombiesPointer(Zombie *zombiesPointer);
};

#endif //EX03_ZOMBIEHORDE_HPP
