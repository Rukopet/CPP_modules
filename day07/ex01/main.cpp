#include <iostream>

#include "iter.hpp"
template <typename T>
void division(T& a) {
	std::cout << a << std::endl;
}

int main() {
	std::cout << "---------------int----------------" << std::endl;
	int i[5] = {1, 2, 3, 4, 5};
	iter(i, 5, division);

	std::cout << "---------------float----------------" << std::endl;
	float f[] = {1,2,3,4,5};
	iter(f, 4, division);

	std::cout << "---------------double----------------" << std::endl;
	double d[] = {1,2,3,4,5};
	iter(d, 3, division);

	std::cout << "---------------string------------------" << std::endl;
	std::string strings[5] = { "321", "123", "tem", "konder", "kaif" };
	iter(strings, 5, division);
}
