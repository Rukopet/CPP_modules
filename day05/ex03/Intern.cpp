#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

forms_templates Intern::_templates[3] = {
		{"robotomy request", &Intern::createRobotomyForm},
		{"shrubbery request", &Intern::createShrubberyForm},
		{"presidental request", &Intern::createPresidentalForm}};

Intern::Intern() {}

Form *Intern::Find(const std::string &form_name, const std::string &target) {
	for (int i = 0; i < 3; ++i)	{
		if (form_name == Intern::_templates[i].name)
		{
			std::cout << "Intern creates " << Intern::_templates[i].name << " form" << std::endl;
			return Intern::_templates[i].func(target);
		}
	}
	throw Intern::InternStupid();
}

Form *Intern::makeForm(const std::string &form_name, const std::string &target) {
	std::cout << "Intern trying create form" << std::endl;
	Form *ret = 0;
	try {
		ret = Find(form_name, target);
	}
	catch (Intern::InternStupid &e)
	{
		std::cout << e.what() << std::endl;
	}

	return ret;
}

Form *Intern::createPresidentalForm(const std::string &target) {
	return new PresidentialPardonForm(target);
}

Form *Intern::createRobotomyForm(const std::string &target) {
	return new RobotomyRequestForm(target);
}

Form *Intern::createShrubberyForm(const std::string &target) {
	return new ShrubberyCreationForm(target);
}

Intern &Intern::operator=(const Intern &op) {
	(void)op;
	return *this;
}
