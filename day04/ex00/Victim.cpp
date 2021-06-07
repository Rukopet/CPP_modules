#include "Victim.hpp"

Victim::Victim(const std::string &name) :
_name(name) {
	std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
}
Victim::Victim() : _name() {
	std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
}
Victim::Victim(Victim const &vict) {
	this->_name = vict.getName();
	std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
}

Victim::~Victim() { std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;}

void Victim::getPolymorphed() const {
	std::cout << this->_name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream &operator<<(std::ostream &os, const Victim &victim) {
	os << "I'm " << victim.getName() << " and I like otters!" << std::endl;
	return os;
}

Victim &Victim::operator=(Victim const &right) {
	this->_name = right.getName();
	return *this;
}

const std::string &Victim::getName() const {
	return _name;
}
void Victim::setName(const std::string &name) {
	_name = name;
}
