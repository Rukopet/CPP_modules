#ifndef EX00_BORROWER_HPP
#define EX00_BORROWER_HPP

#include "Victim.hpp"

class Borrower : public Victim {
public:
	Borrower(const std::string &name);
	Borrower(const Victim &vict);
	Borrower();
	virtual void getPolymorphed() const;
	virtual ~Borrower();
};


#endif //EX00_BORROWER_HPP
