#include <iostream>

#include "Bureaucrat.hpp"

int main() {
	try {
		Bureaucrat kek("Vasya", 1);
		std::cout << kek << std::endl;
		Bureaucrat omega(kek);
		std::cout << omega << std::endl;
//		Bureaucrat kekw("vova", -1);
//		std::cout << kekw << std::endl;
		Bureaucrat waiter("1", 2);
		std::cout << waiter << std::endl;
		Bureaucrat bureaucrat("wow", 1);
		waiter = bureaucrat;
		std::cout << waiter << std::endl;
		Bureaucrat lol("Tamara", 151);
		std::cout << lol << std::endl;
	}
	catch (std::exception &ex)
	{
		std::cout << ex.what() << std::endl;
	}
	return 0;
}
