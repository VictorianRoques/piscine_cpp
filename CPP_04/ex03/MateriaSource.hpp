#ifndef MATERIA_SOURCE_H
# define MATERIA_SOURCE_H

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

public:

	MateriaSource();
	MateriaSource(const MateriaSource & src);
	~MateriaSource();

	MateriaSource & operator=(const MateriaSource & rhs);
	void		learnMateria(AMateria * src);
	AMateria*	createMateria(std::string const & type);

private:

	AMateria 	*_learned[4];
	int			_max;
};

#endif