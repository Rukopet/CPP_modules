#include "MateriaSource.hpp"

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; ++i) {
		if (mat[i] != 0) delete mat[i];
	}
}
MateriaSource::MateriaSource() {
	mat[0] = 0;
	mat[1] = 0;
	mat[2] = 0;
	mat[3] = 0;
}

void MateriaSource::learnMateria(AMateria *materia) {
	int idx = -1;
	for (int i = 0; i != 4; ++i)
	{
		if (mat[i] == 0)
		{
			idx = i;
			break;
		}
	}
	if (idx == -1)
		return;
	mat[idx] = materia;
}

AMateria *MateriaSource::createMateria(const std::string &type) {
	for (int i = 0; i < 4; ++i)
	{
		if (mat[i] != 0)
			if (mat[i]->getType() == type)
				return (mat[i]->clone());
	}
	return 0;
}

MateriaSource::MateriaSource(const MateriaSource &ms) {
	MateriaSource::operator=(ms);
}

MateriaSource &MateriaSource::operator=(const MateriaSource &op) {
	for (int i = 0; i < 4; ++i) {this->mat[i] = op.mat[i];};
	return *this;
}
