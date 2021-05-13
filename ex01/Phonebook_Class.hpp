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
	bool _ADD(void);
	void _SEARCH(void);
	int getLastEmptyUser(User *_users);
};

#endif //EX01_PHONEBOOK_CLASS_HPP
