#include "Peon.hpp"

Peon::Peon(const std::string &name) : Victim(name) {
	std::cout << "Zog zog." << std::endl;
}
Peon::Peon() : Victim() {
	std::cout << "Zog zog." << std::endl;
}
Peon::Peon(const Victim &vict) : Victim(vict) {
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon() { std::cout << "Bleuark..."  << std::endl;}

void Peon::getPolymorphed() const {
	std::cout << this->getName() << " has been turned into a pink pony!" << std::endl;
}
