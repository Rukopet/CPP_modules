#ifndef EX03_INTERN_HPP
#define EX03_INTERN_HPP

#include <iostream>

class Intern {
public:
	Intern();
	void makeForm(const std::string &form_name, const std::string &target);
	static std::string _known_forms[4];
};


#endif //EX03_INTERN_HPP
