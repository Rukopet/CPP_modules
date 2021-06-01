#ifndef EX01_FIXED_HPP
#define EX01_FIXED_HPP

#include <iostream>
#include <cmath>


class Fixed {
public:
	Fixed(const Fixed &copy);
	Fixed();

	Fixed(const int correspondant);
	Fixed(const float corrFloat);
	virtual ~Fixed();

	void setRawBits(int rawBits);
	int getRawBits() const;
	float toFloat() const;
	int toInt() const;

	Fixed &operator=(Fixed const &right);

private:
	int RawBits;
	static const int fractional_bits;
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);


#endif //EX01_FIXED_HPP
