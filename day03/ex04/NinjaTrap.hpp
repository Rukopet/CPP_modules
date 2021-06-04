#ifndef EX03_NINJATRAP_HPP
#define EX03_NINJATRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class NinjaTrap : virtual public ClapTrap {
	std::string _announcePrefix();
public:
	NinjaTrap(const std::string &name);
	void ninjaShoebox(ClapTrap &trap);
	void ninjaShoebox(FragTrap &trap);
	void ninjaShoebox(ScavTrap &trap);
	void ninjaShoebox(NinjaTrap &trap);
	virtual ~NinjaTrap();
};


#endif //EX03_NINJATRAP_HPP