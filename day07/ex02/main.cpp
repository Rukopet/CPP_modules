#include <iostream>

#include "Array.hpp"

int main() {
	Array<int> j;

	Array<int> another(5);
	Array<int> *kek = new Array<int>(10);
	for (int i = 0; i < 10; ++i) {
		kek[0][i] = i + 3;
	}
	Array<int> *kek2 = new Array<int>(*kek);
	Array<int> *kek3 = new Array<int>;
	*kek3 = *kek2;
	delete kek;
	delete kek2;
	delete kek3;

	for (int i = 0; i < 5; ++i) {
		another[i] = i + 3;
	}
	Array<int> copy(another);
	for (int i = 0; i < 5; ++i)
		std::cout << another[i] << " ";
	std::cout << std::endl;



	j = another;
	for (int i = 0; i < 5; ++i)
		std::cout << j[i] << " ";
	std::cout << std::endl;




	try {
		another[20];
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
