#include "Human.hpp"

Human::Human() {}

Brain &Human::getBrain() {
	return const_cast<Brain &>(Hum);
}

std::string Human::identify() {
	return getBrain().identify();
}