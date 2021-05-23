#include <iostream>
#include "ZombieEvent.hpp"

int main() {
	ZombieEvent kekZombie("kekZobmie");
	kekZombie.randomChomp();


	ZombieEvent lolZombie;
	lolZombie.setZombieType("lolZombie");
	lolZombie.randomChomp();


	Zombie *zzz = lolZombie.newZombie("42");
	zzz->announce();
	return 0;
}
