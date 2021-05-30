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
	{
		std::cout << "Full phonebook, you already have 8 contacts" <<
		std::endl;
		return (true);
	}
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
		std::cout.width(10);
		std::cout << std::left <<index;
		std::cout <<"|";
		_write_with_width(_users->getFirstName());
		std::cout << "|";
		_write_with_width(_users->getLastName());
		std::cout << "|";
		_write_with_width(_users->getNickname());
		std::cout << std::endl;
		++index;
	}
	if (index == 0)
		return;
	int ind;
	try {
		std::string input = _takeInput("Enter ID: ");
		ind = std::stoi(input);
	}
	catch (const std::invalid_argument& ex) {
		std::cout << ex.what() << std::endl;
		std::cout << "Wrong INPUT" << std::endl;
		return;
	}
	catch (const std::out_of_range& ex)	{
		std::cout << ex.what() << std::endl;
		std::cout << "Wrong INPUT" << std::endl;
		return;
	}
//	catch (...) {
//		std::cout << "Wrong INPUT" << std::endl;
//		return;
//	}
	if (ind < 0 || ind > 7)
	{
		std::cout << "Wrong user INDEX" << std::endl;
		return;
	}
	else
		_writeSearchOut(&_users[ind]);
};

void Phonebook::_write_with_width(const std::string& f)
{
	std::string tmp;
	tmp = f;
	if (tmp.length() > 10)
		tmp[9] = '.';
	std::cout.width(10);
	std::string ret = tmp.substr(0, 10);
	std::cout << ret;
};

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
};

int Phonebook::getLastEmptyUser(User *users) {
	int ret = 0;
	while (!users[ret].isEmpty())
		++ret;
	return ret;
};

void Phonebook::_writeSearchOut(User *contact) {
	if (contact->isEmpty())
	{
		std::cout << "\tIncorrect ID!" << std::endl;
		return;
	}
	std::cout << std::endl << "FIRST NAME: \t\t|\t" <<
	contact->getFirstName() << std::endl;
	std::cout << "LAST NAME: \t\t|\t"<< contact->getLastName() << std::endl;
	std::cout << "NICKNAME: \t\t|\t"<< contact->getNickname() << std::endl;
	std::cout << "LOGIN: \t\t\t|\t"<< contact->getLogin() << std::endl;
	std::cout << "POSTAL ADDRESS: \t|\t"<< contact->getPostalAddress() <<
	std::endl;
	std::cout << "EMAIL ADDRESS: \t\t|\t"<< contact->getEmailAddress() <<
	std::endl;
	std::cout << "PHONE NUMBER: \t\t|\t"<< contact->getPhoneNumber() <<
	std::endl;
	std::cout << "BIRTHDAY DATE: \t\t|\t"<< contact->getBirthdayDate() <<
	std::endl;
	std::cout << "FAVORITE MEAL: \t\t|\t"<< contact->getFavoriteMeal() <<
	std::endl;
	std::cout << "UNDERWEAR COLOR: \t|\t"<< contact->getUnderwearColor() <<
	std::endl;
	std::cout << "DARKEST SECRET: \t|\t"<< contact->getDarkestSecret() <<
	std::endl << std::endl;
}
