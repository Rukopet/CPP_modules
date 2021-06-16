#ifndef EX02_ASSAULTTERMINATOR_HPP
#define EX02_ASSAULTTERMINATOR_HPP

#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine {
public:

	AssaultTerminator();

	ISpaceMarine *clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;

	virtual ~AssaultTerminator();

};


#endif //EX02_ASSAULTTERMINATOR_HPP
