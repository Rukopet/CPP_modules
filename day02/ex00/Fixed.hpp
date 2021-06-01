#ifndef EX01_FIXED_HPP
#define EX01_FIXED_HPP


#include <iostream>


class Fixed {
public:
	Fixed(const Fixed &copy);
	Fixed();

	Fixed(int rawBits);

	virtual ~Fixed();

	void setRawBits(int rawBits);
	int getRawBits() const;
	Fixed &operator= (Fixed const &right);



private:
	int RawBits;
	static const int fractional_bits;
};




#endif //EX01_FIXED_HPP

//https://embeddedartistry.com/blog/2018/07/12/simple-fixed-point-conversion-in-c/
