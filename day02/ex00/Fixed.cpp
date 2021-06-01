#include "Fixed.hpp"

const int Fixed::fractional_bits = 8;
Fixed::Fixed(const Fixed &copy) : RawBits(copy.getRawBits()) {
	std::cout << "Copy constructor called" << std::endl;
}
Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}
Fixed::Fixed() : RawBits(0) {
	std::cout << "Default constructor called" << std::endl;
}


Fixed &Fixed::operator=(Fixed const &right) {
	std::cout << "Assignation operator called" << std::endl;
	setRawBits(right.getRawBits());
	return *this;
}



void Fixed::setRawBits(int rawBits) {
	RawBits = rawBits;
}
int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return RawBits;
}
