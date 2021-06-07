#ifndef EX00_PEON_HPP
#define EX00_PEON_HPP

#include <ostream>
#include "Victim.hpp"

class Peon : public Victim {
public:
	Peon(const std::string &name);
	Peon(const Victim &vict);
	Peon();
	virtual void getPolymorphed() const;
	virtual ~Peon();

};


#endif //EX00_PEON_HPP
