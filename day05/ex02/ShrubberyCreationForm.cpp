#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
: Form(145, 137, target), _target(target) {}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &cp)	:
Form(cp) {}
ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &op) {
	Form::operator=(op);
	return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
	if (!this->isSigned())
	{
		std::cout << "Need sign this form, before execute" << std::endl;
		return;
	}
	if (executor.getGrade() > this->getNeededGradeToExecute())
		throw Form::GradeTooLowException();
	std::ofstream file(this->_target + "_shrubbery", std::ios_base::trunc);
	file << "     ccee88oo\n"
			"  C8O8O8Q8PoOb o8oo\n"
			" dOB69QO8PdUOpugoO9bD\n"
			"CgggbU8OU qOp qOdoUOdcb\n"
			"    6OuU  /p u gcoUodpP\n"
			"      \\\\\\//  /douUP\n"
			"        \\\\\\////\n"
			"         |||/\\\n"
			"         |||\\/\n"
			"         |||||\n"
			"   .....//||||\\....";
}

