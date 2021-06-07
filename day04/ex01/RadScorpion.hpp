#ifndef EX01_RADSCORPION_HPP
#define EX01_RADSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion : public Enemy {
public:
	RadScorpion(RadScorpion const &mutant);
	RadScorpion();

	RadScorpion &operator=(RadScorpion const &enemy);
	virtual ~RadScorpion();
};


#endif //EX01_RADSCORPION_HPP
