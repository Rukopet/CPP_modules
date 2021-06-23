#ifndef EX00_CONVERT_HPP
#define EX00_CONVERT_HPP

#include <iostream>

class Convert {
public:
	Convert(const std::string &stringToConvert);
	Convert(const Convert &cp);
	Convert();
	const std::string &getStringToConvert() const;
	void setStringToConvert(const std::string &stringToConvert);
	virtual ~Convert();
	Convert &operator=(const Convert& op);
	void toChar();
	void toInt();
	void toDouble();
	void toFloat();

	float getDigit() const;
	void setDigit(float digit);


	struct NonConvertible : public std::exception {
		NonConvertible() throw() {};
		virtual const char* what() const throw() {return "Non convertible";}
	};

private:
	std::string _string_to_convert;
	float		_digit;


	struct Impossible : public std::exception {
		Impossible() throw() {};
		virtual const char* what() const throw() {return "impossible";}
	};
	struct NonPrintable : public std::exception {
		NonPrintable() throw() {};
		virtual const char* what() const throw() {return "Non displayable";}
	};
};


#endif //EX00_CONVERT_HPP
