#include "Cure.hpp"

AMateria *Cure::clone() const {
	return new Cure(*this);
}
Cure::Cure() : AMateria("cure") {};

void Cure::use(ICharacter &target) {
	std::cout <<  "* heals " << target.getName() <<"’s wounds *" << std::endl;
	AMateria::use(target);
}
Cure::Cure(const Cure &pIce) : AMateria(pIce) {
}


Cure & Cure::operator=(const Cure& op)
{
	AMateria::operator=(op);
	return (*this);
}
