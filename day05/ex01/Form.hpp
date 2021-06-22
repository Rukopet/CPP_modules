#ifndef EX01_FORM_HPP
#define EX01_FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
private:
	bool _signed;
	int _needed_grade_to_sign;
	int _needed_grade_to_execute;
	std::string _name_form;

public:
	Form(int neededGradeToSign, int neededGradeToExecute,
		 const std::string &nameForm);
	Form(Form &copy);
	~Form();

	bool isSigned() const;
	int getNeededGradeToSign() const;
	int getNeededGradeToExecute() const;
	const std::string &getNameForm() const;
	void beSigned(Bureaucrat &bureaucrat);

	Form &operator=(const Form& op);

	struct GradeTooHighException : public std::exception {
		GradeTooHighException() throw() {};
		virtual const char *what() const throw() { return "Grade is too high!";};
	};
	struct GradeTooLowException : public std::exception {
		GradeTooLowException() throw() {};
		virtual const char* what() const throw() {return "Grade is too low!";}
	};
};

std::ostream &operator<<(std::ostream &os, const Form &form);

#endif //EX01_FORM_HPP
