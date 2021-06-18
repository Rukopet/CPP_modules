#include "Ice.hpp"

AMateria *Ice::clone() const {
	return new Ice(*this);
}
Ice::Ice() : AMateria("ice") {};


void Ice::use(ICharacter &target) {
	AMateria::use(target);
	std::cout <<  "* shoots an ice bolt at " << target.getName() <<" *" << std::endl;
}
Ice::Ice(const Ice &pIce) : AMateria(pIce) {}


Ice & Ice::operator=(const Ice& op)
{
	AMateria::operator=(op);
	return (*this);
}

