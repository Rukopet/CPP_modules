#include "Form.hpp"

Form::Form(int neededGradeToSign, int neededGradeToExecute,
		   const std::string &nameForm) : _signed(false) {
	if (neededGradeToExecute < 1 || neededGradeToSign < 1)
		throw Form::GradeTooHighException();
	else if (neededGradeToSign > 150 || neededGradeToExecute > 150)
		throw Form::GradeTooLowException();
	_needed_grade_to_sign = neededGradeToSign;
	_needed_grade_to_execute = neededGradeToExecute;
	_name_form = nameForm;
}
Form::Form(Form &copy) :
_signed(copy._signed),
_needed_grade_to_sign(copy._needed_grade_to_sign),
_needed_grade_to_execute(copy._needed_grade_to_execute),
_name_form(copy._name_form) {}

void Form::beSigned(Bureaucrat &bureaucrat) {
	int grade = bureaucrat.getGrade();
	if (this->_signed)
	{
		std::cout << "form: " << this->_name_form <<" already signed!" << std::endl;
		return;
	}
	if (grade > this->_needed_grade_to_sign)
		throw Form::GradeTooLowException();
	std::cout << this->_name_form << " signed!" << std::endl;
	this->_signed = true;
}

std::ostream &operator<<(std::ostream &os, const Form &form) {
	std::string text_for_sign = (form.isSigned()) ? " now form is signed" : " now form is unsigned";
	os << "form with name: " << form.getNameForm() << ", with needed grade to sign - "
	<< form.getNeededGradeToSign() << " and to execute - " << form.getNeededGradeToExecute()
	<< text_for_sign;
	return os;
}

Form &Form::operator=(const Form &op) {
	this->_signed = op._signed;
	this->_name_form = op._name_form;
	this->_needed_grade_to_execute = op._needed_grade_to_execute;
	this->_needed_grade_to_sign = op._needed_grade_to_sign;
	return *this;
}

void Form::execute(const Bureaucrat &executor) const {(void)executor;}


bool Form::isSigned() const {return _signed;}
int Form::getNeededGradeToSign() const {return _needed_grade_to_sign;}
int Form::getNeededGradeToExecute() const {return _needed_grade_to_execute;}
const std::string &Form::getNameForm() const {return _name_form;}
Form::~Form() {}
