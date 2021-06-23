#ifndef EX01_SEDESI_RIALIZATION_HPP
#define EX01_SEDESI_RIALIZATION_HPP

#include <iostream>

struct Data {
	std::string *some_string_pointer;
	int 		some_int;
	std::string *some_string;
	~Data() {delete some_string_pointer; delete some_string; std::cout << "some destr" << std::endl;};
};

struct SeDesi_rialization {
	static const char some_literas[];
	static void *serialize(void);
	static Data *deserialize(void *raw);
};


#endif //EX01_SEDESI_RIALIZATION_HPP
