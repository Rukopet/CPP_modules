#ifndef EX03_ROBOTOMYREQUESTFORM_HPP
#define EX03_ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form {
	std::string _target;
public:
	RobotomyRequestForm(const std::string &target);

	~RobotomyRequestForm();
	RobotomyRequestForm(RobotomyRequestForm &cp);
	RobotomyRequestForm &operator=(const RobotomyRequestForm& op);

	void execute(const Bureaucrat &executor) const;
};


#endif //EX03_ROBOTOMYREQUESTFORM_HPP
