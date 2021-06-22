#include <iostream>

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
	Form *form_for_president = new PresidentialPardonForm("kek");
	Form *form_for_robot = new RobotomyRequestForm("SC4V-TP");
	Form *form_for_shrubbery = new ShrubberyCreationForm("check");

	Bureaucrat Ivan("Ivan", 70);
	Bureaucrat Timofey("Timofey", 30);
	Bureaucrat Grigoriy("Grigoriy", 2);
	Bureaucrat Balda("Balda", 140);

	Balda.signForm(*form_for_president);
	Grigoriy.executeForm(*form_for_president);
	Grigoriy.signForm(*form_for_president);
	Grigoriy.executeForm(*form_for_president);

	Balda.signForm(*form_for_shrubbery);
	Balda.executeForm(*form_for_shrubbery);

	Ivan.signForm(*form_for_shrubbery);
	Ivan.executeForm(*form_for_shrubbery);

	Timofey.executeForm(*form_for_robot);
	Timofey.signForm(*form_for_robot);
	Timofey.executeForm(*form_for_robot);
	return 0;
}
