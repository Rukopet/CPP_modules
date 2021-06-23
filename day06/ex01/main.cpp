#include <iostream>

#include "SeDesi_rialization.hpp"

int main() {
	void *check = SeDesi_rialization::serialize();
	Data *some_data = SeDesi_rialization::deserialize(check);
	delete some_data;
	return 0;
}
