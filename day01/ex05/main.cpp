#include <iostream>
#include "Human.hpp"

int main()
{
	Human bob;
	std::cout << bob.identify() << std::endl;
	std::cout << bob.getBrain().identify() << std::endl;


	Human NoBob;
	std::cout << NoBob.identify() << std::endl;
	std::cout << NoBob.getBrain().identify() << std::endl;
}
