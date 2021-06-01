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
Fixed::Fixed(const int correspondant) : RawBits(correspondant << fractional_bits) {
	std::cout << "Int constructor called" << std::endl;
}
Fixed::Fixed(const float inp) {
	std::cout << "Float constructor called" << std::endl;
	this->RawBits = (int)(roundf(inp * (1 << fractional_bits)));
}



float Fixed::toFloat() const {
	return ((float)this->RawBits / (float)(1 << fractional_bits));
}
int Fixed::toInt() const {
	return this->RawBits >> fractional_bits;
}



Fixed &Fixed::operator=(Fixed const &right) {
	std::cout << "Assignation operator called" << std::endl;
	setRawBits(right.getRawBits());
	return *this;
}
std::ostream &operator<<(std::ostream &os, const Fixed &fixed) {
	return os << fixed.toFloat();
}



void Fixed::setRawBits(int rawBits) {
	RawBits = rawBits;
}
int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return RawBits;
}

