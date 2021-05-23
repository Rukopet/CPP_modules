#ifndef EX02_ZOMBIEEVENT_HPP
#define EX02_ZOMBIEEVENT_HPP

# include "ZombieEvent.hpp"
#include "Zombie.hpp"
# include <iostream>

class ZombieEvent{
public:

	ZombieEvent();

	ZombieEvent(const std::string &zombieType);
	void setZombieType(const std::string &zombieType);
	void randomChomp();
	Zombie* newZombie(std::string name);

private:

	std::string _zombieType;
	const std::string &getZombieType() const;
	std::string randomMessage();
	static const std::string _NameArray[10];

};


#endif //EX02_ZOMBIEEVENT_HPP
