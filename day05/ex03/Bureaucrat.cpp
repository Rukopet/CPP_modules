#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name) {
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	_grade = grade;
}
Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat) {
	Bureaucrat::operator=(bureaucrat);
}
Bureaucrat::Bureaucrat() : _name(), _grade(0) {}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &op) {
	this->_grade = op._grade;
	this->_name = op._name;
	return *this;
}

const std::string &Bureaucrat::getName() const {
	return _name;
}

int Bureaucrat::getGrade() const {
	return _grade;
}


void Bureaucrat::upGrade() {
	if (_grade > 1)
		++_grade;
}
void Bureaucrat::downGrade() {
	if (_grade < 150)
		--_grade;
}

void Bureaucrat::signForm(Form &form) {
	try {
		std::cout << this->_name << " try sign " << form.getNameForm() << std::endl;
		form.beSigned(*this);
	}
	catch (Form::GradeTooLowException &e) {
		std::cout << this->_name << " cannot sign " << form.getNameForm()
		<< " because " << e.what() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << this->_name << " cannot sign " << form.getNameForm()
				  << " because " << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(Form const &form) {
	try {
		std::cout << "Form: " << form.getNameForm() << " try too execute" << std::endl;
		form.execute(*this);
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << "Cant execute form, because: " << e.what() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Cant execute form, because: " << e.what() << std::endl;
	}
}


std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat) {
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return os;
}
