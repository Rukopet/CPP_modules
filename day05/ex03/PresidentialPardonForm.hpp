#ifndef EX03_PRESIDENTIALPARDONFORM_HPP
#define EX03_PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form {
	std::string _target;
public:
	PresidentialPardonForm(const std::string &target);
	PresidentialPardonForm(PresidentialPardonForm &cp);
	~PresidentialPardonForm();

	PresidentialPardonForm &operator=(const PresidentialPardonForm& op);

	void execute(const Bureaucrat &executor) const;
};


#endif //EX03_PRESIDENTIALPARDONFORM_HPP
