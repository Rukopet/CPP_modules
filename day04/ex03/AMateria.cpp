#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : _type(type), _xp(0) {}








const std::string &AMateria::getType() const {
	return _type;
}

unsigned int AMateria::getXp() const {
	return _xp;
}

void AMateria::use(ICharacter &target) {
	this->_xp += 10;
}
