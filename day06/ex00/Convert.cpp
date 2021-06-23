#include "Convert.hpp"
#include <cmath>

Convert::Convert(const std::string &stringToConvert) :
_string_to_convert(stringToConvert) {
	try {
		this->_digit = std::stof(this->_string_to_convert);
	}
	catch (std::exception &e) { throw Convert::NonConvertible(); }
}
Convert::Convert(const Convert &cp) : _string_to_convert(cp.getStringToConvert()),
_digit(cp.getDigit()) {}
Convert::Convert() : _string_to_convert(), _digit() {}
Convert::~Convert() {}

Convert &Convert::operator=(const Convert &op) {
	this->_string_to_convert = op._string_to_convert;
	this->_digit = op.getDigit();
	return *this;
}

const std::string &Convert::getStringToConvert() const {return _string_to_convert;}
void Convert::setStringToConvert(const std::string &stringToConvert) {_string_to_convert = stringToConvert;}
float Convert::getDigit() const {return _digit;}
void Convert::setDigit(float digit) {_digit = digit;}

void Convert::toChar() {
	std::cout << "char: ";
	char tmp = 0;
	try {
		int number = static_cast<int>(this->_digit);
		if (!isascii(number))
			throw Convert::Impossible();
		else if (!isprint(number))
			throw Convert::NonPrintable();
		tmp = static_cast<char>(number);
	}
	catch (Convert::NonPrintable &e) {
		std::cout << e.what() << std::endl;
		return;
	}
	catch (Convert::Impossible &e) {
		std::cout << e.what() << std::endl;
		return;
	}
	catch (std::exception &e) {
		std::cout << "impossible" << std::endl;
		return;
	}
	std::cout << tmp << std::endl;
}

void Convert::toInt() {
	if (isinf(this->_digit) || isnan(this->_digit))
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(this->_digit) << std::endl;
}

void Convert::toDouble() {
	double num = static_cast<double>(this->_digit);
	std::string postfix = (num - static_cast<int>(this->_digit) == 0) ? ".0" : "";
	std::cout << "double: " << num << postfix << std::endl;
}

void Convert::toFloat() {
	std::string postfix = (this->_digit - static_cast<int>(this->_digit) == 0) ? ".0f" : "f";
	std::cout << "float: " << this->_digit << postfix << std::endl;
}
