#include "Phonebook_Class.hpp"
#include "User_Class.hpp"


int 		main()
{
	std::string input;
	Phonebook	book;
	while (true)
	{
		std::cout << "Phonebook: ";
		std::cin >> input;
		if (std::cin.eof())
		{
			std::cout << "Whoops, unexpected happens o_O" << std::endl;
			exit(0);
		}
		if (input == "EXIT")
			exit(0);
		if (!book.setCommand(input))
			return (1);
	}
	return (0);
}