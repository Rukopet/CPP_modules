#include <iostream>

#include "SeDesi_rialization.hpp"

int main() {
	void *check = SeDesi_rialization::serialize();
	Data *some_data = SeDesi_rialization::deserialize(check);
	std::cout << "-------------------------------------------" << std::endl;
	std::cout << "IN DATA AFTER DESER: " << some_data->some_int << std::endl;
	std::cout << "IN DATA AFTER DESER: " << *some_data->some_string << std::endl;
	std::cout << "IN DATA AFTER DESER: " << *some_data->some_string_pointer << std::endl;
	delete some_data;
	return 0;
}
