#include <iostream>

#include "Convert.hpp"

int main(int argc, char **argv) {
	if (argc != 2)
		std::cerr << "Not correct amount of arguments" << std::endl;
	Convert conv(*argv);
}
