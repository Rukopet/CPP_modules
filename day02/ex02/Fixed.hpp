#ifndef EX02_FIXED_HPP
#define EX02_FIXED_HPP

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

	Fixed &operator++()
	{
		this->RawBits++;
		return *this;
	}
	// Postfix
	Fixed &operator++(int)
	{
		Fixed temp(*this);
		this->RawBits++;
		return temp;
	}

	Fixed &operator--()
	{
		this->RawBits--;
		return *this;
	}
	//	Postfix
	Fixed &operator--(int)
	{
		Fixed temp(*this);
		this->RawBits--;
		return temp;
	}

	static Fixed min(const Fixed &lhs, const Fixed &rhs);
	static Fixed max(const Fixed &lhs, const Fixed &rhs);

private:
	int RawBits;
	static const int fractional_bits;
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);
bool operator<(const Fixed &lhs, const Fixed &rhs);
bool operator>(const Fixed &lhs, const Fixed &rhs);
bool operator<=(const Fixed &lhs, const Fixed &rhs);
bool operator>=(const Fixed &lhs, const Fixed &rhs);

bool operator==(const Fixed &lhs, const Fixed &rhs);
bool operator!=(const Fixed &lhs, const Fixed &rhs);

float operator-(const Fixed &lhs, const Fixed &rhs);
float operator+(const Fixed &lhs, const Fixed &rhs);
float operator*(const Fixed &lhs, const Fixed &rhs);



#endif //EX02_FIXED_HPP

//https://embeddedartistry.com/blog/2018/07/12/simple-fixed-point-conversion-in-c/