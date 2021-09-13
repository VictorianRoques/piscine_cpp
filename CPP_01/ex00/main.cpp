#include "Zombie.hpp"

int		main()
{
	Zombie *z_1 = newZombie("Paul");
	Zombie *z_2 = newZombie("Pierre");

	z_1->announce();
	randomChump("toto");
	z_2->announce();
	delete z_1;
	delete z_2;
}
