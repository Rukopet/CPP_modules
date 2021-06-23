#include <iostream>

#include "Convert.hpp"
#include <sstream>

int main(int argc, char **argv) {
	if (argc != 2)
	{
		std::cerr << "Not correct amount of arguments" << std::endl;
		exit(1);
	}
	std::string stringToConvert;
	// for single literal, for example 'a'
	if (argv[1][1] == 0) {
		std::stringstream out;
		out << static_cast<int>(argv[1][0]);
		stringToConvert = out.str();
	}
	else
		stringToConvert = argv[1];
	try {
		Convert conv(stringToConvert);
		conv.toChar();
		conv.toInt();
		conv.toFloat();
		conv.toDouble();
	}
	catch (Convert::NonConvertible &e) {
		std::cout 	<<	"char: impossible"		<< std::endl
					<<	"int: impossible" 		<< std::endl
					<<	"float: impossible"		<< std::endl
					<<	"double: impossible"	<< std::endl;
	}

}
