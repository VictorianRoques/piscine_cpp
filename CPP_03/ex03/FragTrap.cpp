#include "FragTrap.hpp"

/*
** ---------------- CONSTRUCTOR ----------------
*/

FragTrap::FragTrap() : ClapTrap() {

	std::cout << "Default FragTrap constructor called" << std::endl;
	this->_Hitpoints = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
}

FragTrap::FragTrap(std::string Name) : ClapTrap(Name) {
	 
	std::cout << "Parameter FragTrap constructor called" << std::endl;
	this->_Hitpoints = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
}

FragTrap::FragTrap(const FragTrap & src) : ClapTrap(src) {
	
	std::cout << "Copy FragTrap constructor called" << std::endl;
	*this = src;
}

/*
** ---------------- DESTRUCTOR ----------------
*/

FragTrap::~FragTrap() {

	std::cout << "Destructor FragTrap called" << std::endl;
}

/*
** ---------------- OPERATOR ----------------
*/

FragTrap & FragTrap::operator= ( const FragTrap & src) {

	if (this != &src)
	{
		_Name = src._Name;
		_Hitpoints = src._Hitpoints;
		_EnergyPoints = src._EnergyPoints;
		_AttackDamage = src._AttackDamage;
	}
	return *this;
}

/*
** ---------------- FUNCTION ----------------
*/

void		FragTrap::attack(std::string const & target) {

	std::cout << "FragTrap " << _Name << " attack " <<  target;
	std::cout << " , causing " << _AttackDamage << " points of dommage!" << std::endl;
}

void		FragTrap::highFivesGuys() {

	std::cout << "Give me High Fives Guys !" << std::endl;
}
