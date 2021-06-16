#include "Borrower.hpp"

Borrower::Borrower(const std::string &name) : Victim(name) {
	std::cout << "Where do I sign?" << std::endl;
}
Borrower::Borrower() : Victim() {
	std::cout << "Where do I sign?" << std::endl;
}
Borrower::Borrower(const Victim &vict) : Victim(vict) {
	std::cout << "Copy constructor for Borrower" << std::endl;
}

Borrower::~Borrower() { std::cout << "Where my house...?("  << std::endl;}

void Borrower::getPolymorphed() const {
	std::cout << this->getName() << " Bank`s personal slave" << std::endl;
}
