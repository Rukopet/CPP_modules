#ifndef EX02_TACTICALMARINE_HPP
#define EX02_TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine {
public:
	TacticalMarine(const TacticalMarine& op);
	TacticalMarine();
	virtual ISpaceMarine* clone() const;
	virtual void battleCry() const;
	virtual void rangedAttack() const;
	virtual void meleeAttack() const;
	virtual ~TacticalMarine();
TacticalMarine &operator=(const TacticalMarine& op);
};


#endif //EX02_TACTICALMARINE_HPP
