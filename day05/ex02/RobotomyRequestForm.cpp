#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) :
Form(72, 45, "RobotomyRequestForm"), _target(target){}
RobotomyRequestForm::~RobotomyRequestForm() {}
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &op) {
	Form::operator=(op);
	return *this;
}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &cp) : Form(cp) {}



void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
	if (!this->isSigned())
	{
		std::cout << "Need sign this form, before execute" << std::endl;
		return;
	}
	if (executor.getGrade() > this->getNeededGradeToExecute())
		throw Form::GradeTooLowException();
	std::srand(time(0));
	std::cout <<  "* blu bla bli blu da * <robot makes some strange noizes for do" << this->_target << ">" << std::endl;
	if (std::rand() % 2)
		std::cout << "Execute " << this->getNameForm() << " success" << std::endl;
	else
		std::cout << "Execute " << this->getNameForm() << " failed" << std::endl;
}
