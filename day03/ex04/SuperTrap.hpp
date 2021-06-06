#ifndef EX04_SUPERTRAP_HPP
#define EX04_SUPERTRAP_HPP

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap {
public:
	SuperTrap(const std::string &name);
	SuperTrap(SuperTrap const &other);
	SuperTrap();
	virtual ~SuperTrap();

	SuperTrap &operator=(const SuperTrap& trap);

private:
	std::string _announcePrefix();
};


#endif //EX04_SUPERTRAP_HPP
