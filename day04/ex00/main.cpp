#include <iostream>

#include "Peon.hpp"
#include "Sorcerer.hpp"
#include "Borrower.hpp"

int main() {
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);

	Borrower mikhail("bo");
	robert.polymorph(mikhail);
	std::cout << std::endl << "------------------------------" << std::endl << std::endl;
	return 0;
}
