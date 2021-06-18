#ifndef EX03_CURE_HPP
#define EX03_CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {
public:
	Cure(const Cure &pIce);
	Cure();
	AMateria *clone() const;
	void use(ICharacter &target);

	Cure &operator=(const Cure& op);
};


#endif //EX03_CURE_HPP
