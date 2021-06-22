#include <iostream>

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"

int main() {
	Intern someRandomIntern;
	Form* rrf;
	Form* pres_try;
	Form* Shru;

	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	pres_try = someRandomIntern.makeForm("asdasd", "NotBender");
	Shru = someRandomIntern.makeForm("shrubbery request", "malina");

	Bureaucrat Ivan("Ivan", 30);
	Ivan.signForm(*Shru);
	Ivan.executeForm(*Shru);
	delete rrf;
	delete pres_try;
	delete Shru;
w
	return 0;
}
