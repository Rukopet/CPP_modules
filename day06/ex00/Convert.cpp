#include "Convert.hpp"

Convert::Convert(const std::string &stringToConvert) :
_string_to_convert(stringToConvert) {}
Convert::Convert(const Convert &cp) : _string_to_convert(cp.getStringToConvert()) {}
Convert::Convert() : _string_to_convert() {}
Convert::~Convert() {}

Convert &Convert::operator=(const Convert &op) {
	this->_string_to_convert = op._string_to_convert;
	return *this;
}

const std::string &Convert::getStringToConvert() const {return _string_to_convert;}
void Convert::setStringToConvert(const std::string &stringToConvert) {_string_to_convert = stringToConvert;}


void Convert::toChar() {
	try {

		static_cast<char>(_string_to_convert);
	}
}

void Convert::toInt() {

}

void Convert::toDouble() {

}

void Convert::toFloat() {

}
