#include "Brain.hpp"

std::string Brain::identify() {
	std::stringstream addressString;
	void * _this = this;
	addressString << _this;
	return "0x" + addressString.str();
}
