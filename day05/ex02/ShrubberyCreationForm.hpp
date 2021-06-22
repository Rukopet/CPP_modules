#ifndef EX02_SHRUBBERYCREATIONFORM_HPP
#define EX02_SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <fstream>


class ShrubberyCreationForm : public Form {
	std::string _target;
public:
	ShrubberyCreationForm(const std::string &target);
	ShrubberyCreationForm(ShrubberyCreationForm &cp);
	~ShrubberyCreationForm();

	void execute(const Bureaucrat &executor) const;
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm& op);
};


#endif //EX02_SHRUBBERYCREATIONFORM_HPP
