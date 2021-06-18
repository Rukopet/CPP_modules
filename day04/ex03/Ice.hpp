#ifndef EX03_ICE_HPP
#define EX03_ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {
public:
	Ice(const Ice &pIce);
	Ice();
	AMateria *clone() const;
	void use(ICharacter &target);

	Ice &operator=(const Ice& op);
};


#endif //EX03_ICE_HPP
