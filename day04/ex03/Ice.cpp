#include "Ice.hpp"

AMateria *Ice::clone() const {
	return NULL;
}

void Ice::use(ICharacter &target) {
	AMateria::use(target);
	std::cout <<  "* shoots an ice bolt at NAME *" << std::endl;
}
