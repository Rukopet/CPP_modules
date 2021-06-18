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


std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat) {
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return os;
}
