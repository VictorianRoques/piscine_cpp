#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	
	std::cout << "Default Materia Source constructor called" << std::endl;
	_max = 0;
}

MateriaSource::MateriaSource(const MateriaSource & src) {

	if (this != &src) {
		_max = src._max;
		for (int i = 0; i < _max; i++)
			_learned[i] = src._learned[i]->clone();
	}
}

MateriaSource & MateriaSource::operator=(const MateriaSource & rhs) {

	if (this != &rhs)
	{
		for (int i = 0; i < _max; i++)
			delete _learned[i];
		_max = rhs._max;
		for (int i = 0; i < _max; i++)
			_learned[i] = rhs._learned[i]->clone();
	}
	return *this;
}

void	MateriaSource::learnMateria(AMateria * src) {

	if (_max < 4)
	{
		_learned[_max] = src;
		_max++;
	}
}

AMateria *	MateriaSource::createMateria(std::string const & type) {

	for (int i = 0; i < _max; i++)
	{
		if (_learned[i]->getType() == type)
			return _learned[i];
	}
	return 0;
}

MateriaSource::~MateriaSource() {

	std::cout << "Destructor Materia Source called" << std::endl;
	for (int i = 0; i < _max; i++)
		delete _learned[i];
}
