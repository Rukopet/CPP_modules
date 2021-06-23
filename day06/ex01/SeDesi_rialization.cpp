#include "SeDesi_rialization.hpp"

const char SeDesi_rialization::some_literas[] = "abcdefghijklmnopqrstuvwxyz";

void *SeDesi_rialization::serialize(void) {
	Data *ret = new Data;

	std::srand(time(0));

//	ret->some_int = std::rand() % 1000;
	ret->some_int = 123;
	for (int i = 0; i != 23; ++i)
		ret->some_string += SeDesi_rialization::some_literas[std::rand() % 24];
	ret->some_string_pointer = new std::string;
	for (int i = 0; i != 50; ++i)
		*(ret->some_string_pointer) += SeDesi_rialization::some_literas[std::rand() % 24];
	std::cout << *(ret->some_string_pointer) << std::endl;
	std::string ex = *(ret->some_string_pointer + 1);
	std::cout << "--" << ex << std::endl;
	std::cout << 123 << ret->some_string << std::endl;
	return reinterpret_cast<void *>(ret);
}

Data *SeDesi_rialization::deserialize(void *raw) {
	Data *ret = new Data;
	ret->some_string_pointer = (reinterpret_cast<std::string *>(raw));
	ret->some_int = *(reinterpret_cast<int *>(raw) + 2);
	std::cout << "***" << *(ret->some_string_pointer) << std::endl;
//	ret->some_string = std::string(*(reinterpret_cast<std::string *>(raw) + 32));
	return ret;
}