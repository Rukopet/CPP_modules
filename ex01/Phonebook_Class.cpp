#include "Phonebook_Class.hpp"

Phonebook::Phonebook() {
};

Phonebook::~Phonebook() {
};

bool Phonebook::_ADD() {
	int lastUser = getLastEmptyUser(_users);
	if (lastUser > 8)
		return (false);
	std::string input;
	std::cin >> input;
	if (std::cin.eof())
		return (false);
	_users[lastUser].setFirstName();
	return (true);
};

void Phonebook::_SEARCH() {
};



bool Phonebook::setCommand(const std::string &command) {
	_command = command;
	if (command == "ADD")
	{
		if (!_ADD())
			return (false);
	}
	else if (command == "SEARCH")
		_SEARCH();
	else
		std::cout << "Incorrect command : \"" << command << \
		"\", try ADD, SEARCH, EXIT" << std::endl;
	return (true);
}

int Phonebook::getLastEmptyUser(User *users) {
	int ret = 0;
	while (!users[ret].isEmpty())
		++ret;
	return ret;
};
