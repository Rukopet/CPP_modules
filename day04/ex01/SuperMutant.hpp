#ifndef EX01_SUPERMUTANT_HPP
#define EX01_SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant : public Enemy {
public:
	SuperMutant(SuperMutant const &mutant);
	SuperMutant();

	SuperMutant &operator=(SuperMutant const &enemy);
	virtual void takeDamage(int damage);
	virtual ~SuperMutant();
};


#endif //EX01_SUPERMUTANT_HPP
