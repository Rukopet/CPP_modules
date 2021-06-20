#ifndef EX00_BUREAUCRAT_HPP
#define EX00_BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat {
private:
	std::string _name;
	int _grade;
public:
	Bureaucrat(const std::string &name, int grade);
	Bureaucrat(const Bureaucrat& bureaucrat);
	Bureaucrat();


	Bureaucrat &operator=(const Bureaucrat& op);

	const	std::string &getName() const;
	int		getGrade() const;
	void	upGrade();
	void	downGrade();


struct GradeTooHighException : public std::exception {
	GradeTooHighException() throw() {};
	virtual const char *what() const throw() {return "Grade is too high!";};
};
struct GradeTooLowException : public std::exception {
	GradeTooLowException() throw() {};
	virtual const char* what() const throw() {return "Grade is too low!";}
};


};
std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);

#endif //EX00_BUREAUCRAT_HPP
