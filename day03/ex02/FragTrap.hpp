#ifndef EX02_FRAGTRAP_HPP
#define EX02_FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"


class FragTrap : public ClapTrap {
	void prologueAttack(const std::string &target);
	void annoyingAttack(const std::string &target);
	void beatboxAttack(const std::string &target);
	void stupidjokesAttack(const std::string &target);
	void panicAttack(const std::string &target);
public:
	FragTrap(const std::string &name);
	FragTrap(const FragTrap &trap);
	FragTrap();
	virtual ~FragTrap();
	void vaulthunter_dot_exe(std::string const &target);
	std::string _announcePrefix();
	FragTrap &operator=(const FragTrap& trap);
};

typedef void(FragTrap::*funcs) (const std::string &target);
#endif //EX02_FRAGTRAP_HPP
