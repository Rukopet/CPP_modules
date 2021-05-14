#include "Phonebook_Class.hpp"
#include "User_Class.hpp"
void Foo()
{
	std::cout << "Foo" << std::endl;
}

int 		main(int argc, char **argv)
{
	std::string input;
	Phonebook	book;
	User user;
	user.funcs[0];
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