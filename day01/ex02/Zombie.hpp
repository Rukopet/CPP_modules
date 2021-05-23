#ifndef EX02_ZOMBIE_HPP
# define EX02_ZOMBIE_HPP

# include "Zombie.hpp"
# include <iostream>


class Zombie {
public:

	Zombie(const std::string &zombieType);
	Zombie();
	void announce();
	void setName(const std::string &name);
	void setZombieType(const std::string &zombieType);

private:
	std::string _name;
	std::string zombieType;
	const std::string &getName() const;
	const std::string &getZombieType() const;

};


#endif //EX02_ZOMBIE_HPP
