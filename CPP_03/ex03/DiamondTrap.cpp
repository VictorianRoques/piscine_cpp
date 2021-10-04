#include "DiamondTrap.hpp"

/*
** ---------------- CONSTRUCTOR ----------------
*/

DiamondTrap::DiamondTrap( void ) {
 
	std::cout << "Default constructor Diamond Trap called" << std::endl;
	this->_AttackDamage = 30;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name) {

	std::cout << "Paramater constructor Diamond Trap called" << std::endl;
	this->_AttackDamage = 30;
	this->_Name = name;
}

DiamondTrap::DiamondTrap(const DiamondTrap & src) : ClapTrap(src), FragTrap(src), ScavTrap(src) {

	std::cout << "Copy Diamond Trap constructor called" << std::endl;
	*this = src;
}

/*
** ---------------- DESTRUCTOR ----------------
*/

DiamondTrap::~DiamondTrap( void ) {
	
	std::cout << "Destructor Diamond Trap called" << std::endl;
}

/*
** ---------------- OPERATOR ----------------
*/

DiamondTrap & DiamondTrap::operator= ( const DiamondTrap & src) {

	if (this != &src)
	{
		this->ClapTrap::_Name = src.ClapTrap::_Name;
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

void	DiamondTrap::whoAmI() {

	std::cout << "I am " << this->_Name << " and my ClapTrap name is: " << ClapTrap::_Name << std::endl;
}

void	DiamondTrap::showAttributs() {

	std::cout << "Show Attributs: " << std::endl;
	std::cout << "Name: " << _Name << std::endl;
	std::cout << "ClapTrap name: " << ClapTrap::_Name << std::endl;
	std::cout << "Hitpoints: " << _Hitpoints << std::endl;
	std::cout << "Energy: " << _EnergyPoints << std::endl;
	std::cout << "Attack Damage: " << _AttackDamage << std::endl;
}
