#include <iostream>

#include <vector>
#include "easyfind.hpp"

int		main(void)
{
	std::vector<int> vec;
	std::srand(time(0) + 198712);
	int rand_num = 0;
	int check = 0;
	for (int i = 0; i != 5; ++i) {
		try {
			int rand_num = std::rand() % 100;
			vec.push_back(rand_num);
			if (i == 3) {
				check = 10000;
			}
			else
				check = rand_num;
			std::cout << easyfind(vec, check) << std::endl;
		}
		catch (std::exception &e) {
			std::cout << "Not found" << std::endl;
		}
	}
	return 0;
}