#include "Phonebook_Class.hpp"

int 		main(int argc, char **argv)
{
	std::string input;
	Phonebook	book;

	while (true)
	{
		std::cout << "Phonebook: ";
		std::cin >> input;
		if (input == "EXIT")
			break;
		if (!book.setCommand(input))
			return (1);
	}
	return (0);
}