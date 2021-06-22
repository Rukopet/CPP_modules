#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) :
Form(25, 5, "PresidentialPardonForm"), _target(target) {}
PresidentialPardonForm::~PresidentialPardonForm() {}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &cp) : Form(cp) {}
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &op) {
	Form::operator=(op);
	return *this;
}


void PresidentialPardonForm::execute(const Bureaucrat &executor) const{
	if (!this->isSigned())
	{
		std::cout << "Need sign this form, before execute" << std::endl;
		return;
	}
	if (executor.getGrade() > this->getNeededGradeToExecute())
		throw Form::GradeTooLowException();
	std::cout << "Tells us " << this->getNameForm() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}
