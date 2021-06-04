#ifndef EX04_SUPERTRAP_HPP
#define EX04_SUPERTRAP_HPP

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap {
public:
	SuperTrap(const std::string &name);

	virtual ~SuperTrap();

private:
	std::string _announcePrefix();
};


#endif //EX04_SUPERTRAP_HPP
