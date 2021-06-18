#ifndef EX03_MATERIASOURCE_HPP
#define EX03_MATERIASOURCE_HPP

#include <string>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource {
private:
	AMateria *mat[4];
public:
	MateriaSource(const MateriaSource &ms);
	MateriaSource();
	~MateriaSource();

	void learnMateria(AMateria *materia);

	AMateria *createMateria(const std::string &type);

	MateriaSource &operator=(const MateriaSource& op);
};


#endif //EX03_MATERIASOURCE_HPP
