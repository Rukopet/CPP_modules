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
	std::string _NameArray[10] = {"budz" , "pain" , "konan","nagato", "itachi",
								 "tobi", "madara", "naruto", "danzou", "kakashi"};

};


#endif //EX02_ZOMBIEEVENT_HPP
