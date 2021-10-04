#include "ClapTrap.hpp"

/*
** ---------------- CONSTRUCTOR ----------------
*/

ClapTrap::ClapTrap( void ) {

	std::cout << "Default constructor called" << std::endl;
	_Hitpoints = 10;
	_EnergyPoints = 10;
	_AttackDamage = 0;
}

ClapTrap::ClapTrap ( std::string InputName) {
	
	std::cout << "Parameter constructor called" << std::endl;
	_Name = InputName;
	_Hitpoints = 10;
	_EnergyPoints = 10;
	_AttackDamage = 0;
}

ClapTrap::ClapTrap ( const ClapTrap & src ) {

	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

/*
** ---------------- DESTRUCTOR ----------------
*/

ClapTrap::~ClapTrap ( void ) {
	
	std::cout << "Desctrutor called" << std::endl;
}

/*
** ---------------- Functions ----------------
*/

ClapTrap & ClapTrap::operator= ( const ClapTrap & src) {

	if (this != &src)
	{
		_Name = src._Name;
		_Hitpoints = src._Hitpoints;
		_EnergyPoints = src._EnergyPoints;
		_AttackDamage = src._AttackDamage;
	}
	return *this;
}

void		ClapTrap::attack ( std::string const & target ) {

	std::cout << "ClapTrap "<< _Name << " attack " <<  target;
	std::cout << " , causing " << _AttackDamage << " points of dommage!" << std::endl;

}

void		ClapTrap::takeDamage ( unsigned int amount) {

	std::cout << "ClapTrap " << _Name << " take " << amount << " point of dommage! ";
	_Hitpoints -= amount;
	if (_Hitpoints <= 0)
	{
		_Hitpoints = 0;
		std::cout << "He is dead" << std::endl;
	}
	else
		std::cout << "Remain: " << _Hitpoints << " HitPoints" << std::endl;
		
}

void		ClapTrap::beRepaired ( unsigned int amount ) {

	std::cout << "ClapTrap " << _Name << " recover " << amount << " Hitpoints ";
	_Hitpoints += amount;
	std::cout << "Remain: " << _Hitpoints << " Hitpoints" << std::endl;

}
