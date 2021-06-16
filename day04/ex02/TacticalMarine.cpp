#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(const TacticalMarine& op) {
	*this = op;
}

TacticalMarine::TacticalMarine() {
	std::cout <<  "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine & TacticalMarine::operator=(const TacticalMarine& op)
{
	return *this;
}

void TacticalMarine::battleCry() const {
	std::cout <<  "For the holy PLOT!" << std::endl;
}

void TacticalMarine::rangedAttack() const {
	std::cout << "* attacks with a bolter *" << std::endl;
}

void TacticalMarine::meleeAttack() const {
	std::cout <<  "* attacks with a chainsword *" << std::endl;
}

TacticalMarine::~TacticalMarine() {
	std::cout <<  "Aaargh..." << std::endl;
}

ISpaceMarine *TacticalMarine::clone() const {
	return new TacticalMarine(*this);
}
