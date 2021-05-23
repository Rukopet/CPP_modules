#include <iostream>

void memoryLeak(std::string *&address)
{
	std::string *panther = new std::string("String panther");
	std::cout << *panther << std::endl;
	address = panther;
}

int main(int argc, char **argv) {
	std::string *tmp;
	memoryLeak(tmp);
	std::cout << *tmp << "   --- same string in main! ---" << std::endl;
	delete tmp;
	std::cout << "Memory freed" << std::endl << std::endl;
	if (argv[1] || argc > 1)
		std::system("leaks pony");
	return 0;
}
