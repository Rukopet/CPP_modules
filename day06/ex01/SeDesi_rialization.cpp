#include "SeDesi_rialization.hpp"

const char SeDesi_rialization::some_literas[] = "abcdefghijklmnopqrstuvwxyz";

void *SeDesi_rialization::serialize(void) {
	Data *ret = new Data;

	std::srand(time(0));

	ret->some_int = std::rand() % 1000;
	std::string tmp;
	for (int i = 0; i != 5; ++i)
		tmp += SeDesi_rialization::some_literas[std::rand() % 24];
	ret->some_string = new std::string(tmp);
	tmp = "";
	for (int i = 0; i != 6; ++i)
		tmp += SeDesi_rialization::some_literas[std::rand() % 24];
	ret->some_string_pointer = new std::string(tmp);
	std::cout << "IN SERIALIZATION: " << ret->some_int << std::endl;
	std::cout << "IN SERIALIZATION: " <<  *(ret->some_string) << std::endl;
	std::cout << "IN SERIALIZATION: " << tmp << std::endl;
	return reinterpret_cast<void *>(ret);
}

Data *SeDesi_rialization::deserialize(void *raw) {
	return reinterpret_cast <Data *>(raw);
}


//https://stackoverflow.com/questions/119123/why-isnt-sizeof-for-a-struct-equal-to-the-sum-of-sizeof-of-each-member