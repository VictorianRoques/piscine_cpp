#ifndef HUMAN_B
# define HUMAN_B

#include <string>
#include <iostream>

#include "Weapon.hpp"

class HumanB {

private:

	std::string	name;
	Weapon		*weapon;

public:

	HumanB(std::string name);
	
	void		setWeapon(Weapon& typeWeapon);
	void		attack( void );

};

#endif
