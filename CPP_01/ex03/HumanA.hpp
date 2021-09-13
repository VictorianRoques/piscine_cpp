#ifndef HUMAN_A
# define HUMAN_A

#include <string>
#include <iostream>

#include "Weapon.hpp"

class HumanA {

private:

	std::string	name;
	Weapon&		weapon;

public:

	HumanA(std::string name, Weapon& refWeapon): weapon(refWeapon)
	{
		this->name = name;
	}

	void		attack( void );

};

#endif
