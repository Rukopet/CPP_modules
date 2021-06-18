#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : _type(type), _xp(0) {}

AMateria::AMateria(const AMateria &copy) {
	this->_type = copy._type;
	this->_xp = copy._xp;
}
AMateria::~AMateria() {}


const std::string &AMateria::getType() const {
	return _type;
}

unsigned int AMateria::getXp() const {
	return _xp;
}

void AMateria::use(ICharacter &target) {
	this->_xp += 10;
}

AMateria & AMateria::operator=(const AMateria& op)
{
	this->_xp = op._xp;
	this->_type = op._xp;
	return (*this);
}