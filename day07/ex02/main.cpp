#include <iostream>

#include "Array.hpp"

#define MAX_VAL 750

int main() {
	{
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
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}

	{
		Array<int> numbers(MAX_VAL);
		int* mirror = new int[MAX_VAL];
		srand(time(NULL));
		for (int i = 0; i < MAX_VAL; i++)
		{
			const int value = rand();
			numbers[i] = value;
			mirror[i] = value;
		}
		//SCOPE
		{
			Array<int> tmp = numbers;
			Array<int> test(tmp);
		}

		for (int i = 0; i < MAX_VAL; i++)
		{
			if (mirror[i] != numbers[i])
			{
				std::cerr << "didn't save the same value!!" << std::endl;
				return 1;
			}
		}
		try
		{
			numbers[-2] = 0;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			numbers[MAX_VAL] = 0;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		for (int i = 0; i < MAX_VAL; i++)
		{
			numbers[i] = rand();
		}
		delete [] mirror;//
	}
	return 0;
}
