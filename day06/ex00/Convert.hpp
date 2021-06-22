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

private:
	std::string _string_to_convert;


	struct Impossible : public std::exception {
		Impossible() throw() {};
		virtual const char* what() const throw() {return "Grade is too low!";}
	};
};


#endif //EX00_CONVERT_HPP
