#include <iostream>
#include "ZombieHorde.hpp"

int main() {
	ZombieHorde Horde(10);
	ZombieHorde *heapHorde = new ZombieHorde(2);
	heapHorde->setZombieType("42");
	delete heapHorde;
	return 0;
}
