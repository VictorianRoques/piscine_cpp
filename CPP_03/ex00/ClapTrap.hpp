#ifndef CLAP_TRAP_H
#define CLAP_TRAP_H

#include <iostream>

class ClapTrap {

private:
	
	std::string 	_Name;
	int				_Hitpoints;
	int				_EnergyPoints;
	int				_AttackDamage;

public:
	
	ClapTrap( void );
	ClapTrap( std::string Name);
	ClapTrap( const ClapTrap & src);
	~ClapTrap();

	ClapTrap & operator = (const ClapTrap & src);

	void	attack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

};

#endif