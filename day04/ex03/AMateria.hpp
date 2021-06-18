#ifndef EX03_AMATERIA_HPP
#define EX03_AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria {
public:
	AMateria(std::string const &type);
	AMateria(const AMateria&);
	virtual ~AMateria();

	const std::string &getType() const;
	unsigned int getXp() const;

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
	AMateria &operator=(const AMateria& op);

private:
	std::string _type;
	unsigned int _xp;
public:

};


#endif //EX03_AMATERIA_HPP
