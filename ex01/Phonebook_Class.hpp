#ifndef EX01_PHONEBOOK_CLASS_HPP
#define EX01_PHONEBOOK_CLASS_HPP

#include "User_Class.hpp"

class Phonebook {
public:

	Phonebook();
	~Phonebook();

	bool setCommand(const std::string &command);

private:
	std::string _command;
	User _users[8];
	bool _add();
	void _search();
	int getLastEmptyUser(User *_users);
	static std::string _takeInput(const std::string& Promt);
	static void _write_with_width(const std::string& f);
	void _writeSearchOut(User *contact);
};

#endif //EX01_PHONEBOOK_CLASS_HPP
