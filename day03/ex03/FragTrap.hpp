#ifndef EX03_FRAGTRAP_HPP
#define EX03_FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"


class FragTrap : public ClapTrap {
	void prologueAttack(const std::string &target);
	void annoyingAttack(const std::string &target);
	void beatboxAttack(const std::string &target);
	void stupidjokesAttack(const std::string &target);
	void panicAttack(const std::string &target);
	std::string _announcePrefix();
public:
	FragTrap(const std::string &name);
	virtual ~FragTrap();
	void vaulthunter_dot_exe(std::string const &target);
};

typedef void(FragTrap::*funcs) (const std::string &target);
#endif //EX03_FRAGTRAP_HPP
