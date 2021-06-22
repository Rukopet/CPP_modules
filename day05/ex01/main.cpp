#include <iostream>

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
	Form spravka(70, 70, "some paper");
	std::cout << spravka << std::endl;
	Bureaucrat someChel("tipa kto-to", 60);
	spravka.beSigned(someChel);
	Form some_paper(50, 50, "ndfl");
	Form new_paper(60, 50, "covid");
	someChel.signForm(some_paper);
	someChel.signForm(new_paper);
	std::cout << new_paper << std::endl;
	return 0;
}
