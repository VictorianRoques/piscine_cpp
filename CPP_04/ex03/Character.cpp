#include "Character.hpp"

Character::Character() {
	
	std::cout << "Default Character construcor called" << std::endl;
	_name = "default name";
	max_i = 0;
}

Character::Character(std::string const & name) {

	std::cout << "Paramater Character construcor called" << std::endl;
	_name = name;
	max_i = 0;
}

Character::Character(Character const & src) {

	std::cout << "Copy Character construcor called" << std::endl;
	if (this != &src)
	{
		_name = src._name;
		max_i = src.max_i;
		for (int i = 0; i < max_i; i++)
			_inventory[i] = src._inventory[i]->clone();
	}
}

Character &	Character::operator=(Character const & src) {

	if (this != &src)
	{
		for (int i = 0; i < max_i; i++)
			delete _inventory[i];
		_name = src._name;
		max_i = src.max_i;
		for (int i = 0; i < max_i; i++)
			_inventory[i] = src._inventory[i]->clone();
	}
	return *this;
}

std::string const & Character::getName() const {

	return (_name);
}

void	Character::equip(AMateria *m) {

	if (max_i < 4  && m)
	{
		_inventory[max_i] = m->clone();
		max_i++;
	}
	else
		std::cout << "Full inventory" << std::endl;
}

void	Character::unequip(int idx) {

	if (idx >= 0 && idx < max_i)
	{
		delete _inventory[idx];
		max_i--;
 	}
}

void	Character::use(int idx, ICharacter & target) {

	if (idx >= 0 && idx < max_i)
	{
		_inventory[idx]->use(target);
	}
}

Character::~Character() {

	std::cout << "Destructor Character called" << std::endl;
	for (int i = 0; i < max_i; i++)
		delete _inventory[i];
}