#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
	this->name = name;
}

void	HumanB::attack( void ) {
	std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& typeWeapon)
{
	weapon = &typeWeapon;
}
