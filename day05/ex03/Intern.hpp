#ifndef EX03_INTERN_HPP
#define EX03_INTERN_HPP

#include <iostream>
#include "Form.hpp"

class Intern;

typedef struct {const std::string name; Form *(*func)(const std::string &target);} forms_templates;

class Intern {
public:
	Intern();
	Form *makeForm(const std::string &form_name, const std::string &target);
	Intern &operator=(const Intern& op);


private:
	static Form *createPresidentalForm(const std::string &target);
	static Form *createRobotomyForm(const std::string &target);
	static Form *createShrubberyForm(const std::string &target);
	static Form *Find(const std::string &form_name, const std::string &target);
	static forms_templates _templates[3];


struct InternStupid : public std::exception {
	InternStupid() throw() {};
	virtual const char* what() const throw() {return "The intern didn't find the form you need";}
};

};



#endif //EX03_INTERN_HPP
