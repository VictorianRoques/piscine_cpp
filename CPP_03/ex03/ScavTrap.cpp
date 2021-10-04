#include "ScavTrap.hpp"

/*
** ---------------- CONSTRUCTOR ----------------
*/

ScavTrap::ScavTrap() : ClapTrap() {

	std::cout << "Default ScavTrap constructor called" << std::endl;
	this->_Hitpoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
}

ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name) {
	 
	std::cout << "Parameter ScavTrap constructor called" << std::endl;
	this->_Hitpoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap & src) : ClapTrap(src) {
	
	std::cout << "Copy ScrapTrap constructor called" << std::endl;
	*this = src;
}

/*
** ---------------- DESTRUCTOR ----------------
*/

ScavTrap::~ScavTrap() {

	std::cout << "Destructor ScavTrap called" << std::endl;
}

/*
** ---------------- OPERATOR ----------------
*/

ScavTrap & ScavTrap::operator= ( const ScavTrap & src) {

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

void		ScavTrap::attack(std::string const & target) {

	std::cout << "ScavTrap " << _Name << " attack " <<  target;
	std::cout << " , causing " << _AttackDamage << " points of dommage!" << std::endl;
}

void		ScavTrap::guardGate() {

	std::cout << "ScavTrap " << _Name << " have enterred in gate keeper mode" << std::endl;
}
