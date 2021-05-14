#include "Phonebook_Class.hpp"

Phonebook::Phonebook()  {
};

Phonebook::~Phonebook() {
};

std::string Phonebook::_takeInput(const std::string& Promt) {
	std::string input;
	std::cout << Promt;
	std::cin >> input;
	if (std::cin.eof())
	{
		std::cout << "Whoops, unexpected happens o_O" << std::endl;
		exit(0);
	}
	return input;
};

bool Phonebook::_add() {
	int lastUser = getLastEmptyUser(_users);
	if (lastUser > 8)
		return (false);
	_users[lastUser].setFirstName(_takeInput("Enter FIRST NAME: "));
	_users[lastUser].setLastName(_takeInput("Enter LAST NAME: "));
	_users[lastUser].setNickname(_takeInput("Enter NICKNAME: "));
	_users[lastUser].setLogin(_takeInput("Enter LOGIN: "));
	_users[lastUser].setPostalAddress(_takeInput("Enter POSTAL ADDRESS: "));
	_users[lastUser].setEmailAddress(_takeInput("Enter EMAIL ADDRESS: "));
	_users[lastUser].setPhoneNumber(_takeInput("Enter PHONE NUMBER: "));
	_users[lastUser].setBirthdayDate(_takeInput("Enter BIRTHDAY DATE: "));
	_users[lastUser].setFavoriteMeal(_takeInput("Enter FAVORITE MEAL: "));
	_users[lastUser].setUnderwearColor(_takeInput("Enter UNDERWEAR COLOR: "));
	_users[lastUser].setDarkestSecret(_takeInput("Enter DARKEST SECRET: "));
	_users[lastUser].setEmpty(false);
	return (true);
};

void Phonebook::_search() {
	int index = 0;
	std::string tmpStr;
	while (!_users[index].isEmpty() && index < 8)
	{
		std::cout << index;
		std::cout << "|";
		for (int i = 0; i < 3; ++i)
		{
//			tmpStr = _takeTmpStringWithWidth(PRIVATE_LinksFuncs[i]);
//			tmpStr = _takeTmpStringWithWidth(_users[index].funcs[i]());
			std::cout << tmpStr << "|";
		}
		std::cout << std::endl;
		++index;
	}
	std::string input = _takeInput("Enter ID: ");
	int ind = std::stoi(input);
	if (ind < 0 || ind > 7)
	{
		std::cout << "Wrong user INDEX" << std::endl;
		return;
	}

};

std::string Phonebook::_takeTmpStringWithWidth(const std::string f())
{
	std::string tmp;
	tmp = f();
	if (tmp.length() > 10)
		tmp[10] = '.';
	return tmp.substr(0, 10);
}

bool Phonebook::setCommand(const std::string &command) {
	_command = command;
	if (command == "ADD")
	{
		if (!_add())
			return (false);
	}
	else if (command == "SEARCH")
		_search();
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
}
