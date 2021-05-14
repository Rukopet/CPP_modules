#ifndef EX01_PHONEBOOK_CLASS_HPP
#define EX01_PHONEBOOK_CLASS_HPP

#include "User_Class.hpp"

class Phonebook {
public:

	Phonebook(void);
	~Phonebook(void);

	bool setCommand(const std::string &command);

private:
	std::string _command;
	User _users[8];
	bool _add();
	void _search();
	int getLastEmptyUser(User *_users);
	std::string _takeInput(const std::string& Promt);
	std::string _takeTmpStringWithWidth(const std::string f());
//	PRIVATE_FuncsFromUsers PRIVATE_LinksFuncs[3];
	const std::string& (*PRIVATE_LinksFuncs)();
};

#endif //EX01_PHONEBOOK_CLASS_HPP
