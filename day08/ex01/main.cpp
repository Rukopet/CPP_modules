#include "Span.hpp"

int main() {
	Span kek(10);
	std::srand(time(0) + 06546534135);
	for (int i = 0; i != 5; ++i) {
		kek.addNumber(std::rand() % 10000);
	}
	std::cout << kek.longestSpan() << std::endl;
	std::cout << kek.shortestSpan() << std::endl;


	std::cout << "-----------------------------" << std::endl;
	Span kek2(10000);
	for (int i = 0; i != 10000; ++i) {
		kek2.addNumber(std::rand() % 10000);
	}
	std::cout << kek2.longestSpan() << std::endl;
	std::cout << kek2.shortestSpan() << std::endl;


	std::cout << "-----------------------------" << std::endl;
	Span wow(-10);
	for (int i = 0; i != 10; ++i) {
		wow.addNumber(i);
	}
	std::cout << wow.longestSpan() << std::endl;
	std::cout << wow.shortestSpan() << std::endl;
}
