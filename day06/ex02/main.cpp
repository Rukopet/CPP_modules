#include <iostream>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void)
{
	std::srand(time(0) + rand() % 213);
	switch (std::rand() % 3) {
		case 0: {
			std::cout << "AAA" << std::endl;
			return new A;
		}
		case 1: {
			std::cout << "BBB" << std::endl;
			return new B;
		}
		case 2: {
			std::cout << "CCC" << std::endl;
			return new C;
		}
	}
	return new C;
}

void identify_from_pointer(Base * p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A - class" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B - class" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C - class" << std::endl;
}

void identify_from_pointer(Base & p)
{
	if (dynamic_cast<A*>(&p))
		std::cout << "A - class" << std::endl;
	else if (dynamic_cast<B*>(&p))
		std::cout << "B - class" << std::endl;
	else if (dynamic_cast<C*>(&p))
		std::cout << "C - class" << std::endl;
}

int main() {
	for (int i = 0; i < 5; ++i)
	{
		Base *pointer = generate();
		identify_from_pointer(dynamic_cast<Base &>(*pointer));
		identify_from_pointer(pointer);
		std::cout << "------------------------------------------" << std::endl;
		delete pointer;
	}
}
