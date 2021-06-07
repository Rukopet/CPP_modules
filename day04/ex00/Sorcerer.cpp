#include "Sorcerer.hpp"

Sorcerer::Sorcerer(const std::string &name, const std::string &title) :
_name(name), _title(title) {
	std::cout << _name << ", " << _title << ", is born!"<< std::endl;
}
Sorcerer::Sorcerer() : _name(), _title() {
	std::cout << _name << ", " << _title << ", is born!"<< std::endl;
}
Sorcerer::Sorcerer(Sorcerer const &sorc) : _name(sorc.getName()), _title(sorc.getTitle()) {
	std::cout << _name << ", " << _title << ", is born!"<< std::endl;
}
Sorcerer::~Sorcerer() {
	std::cout << _name << ", " << _title << " is dead. Consequences will never be the same!" << std::endl;
}

std::ostream &operator<<(std::ostream &os, const Sorcerer &sorcerer) {
	os << "I am " << sorcerer.getName() << ", " << sorcerer.getTitle() << ", and I like ponies!" << std::endl;
	return os;
}

void Sorcerer::polymorph(Victim const & victim) {
	victim.getPolymorphed();
}


Sorcerer &Sorcerer::operator=(Sorcerer const &right) {
	this->_name = right.getName();
	this->_title = right.getTitle();
	return *this;
}

const std::string &Sorcerer::getName() const {
	return _name;
}
const std::string &Sorcerer::getTitle() const {
	return _title;
}