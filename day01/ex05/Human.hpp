#ifndef EX05_HUMAN_HPP
#define EX05_HUMAN_HPP

#include "Brain.hpp"

class Human {
public:
	Human();

	std::string identify();
	Brain & getBrain();
	const Brain Hum;
};


#endif //EX05_HUMAN_HPP
