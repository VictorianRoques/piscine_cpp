#include "Zombie.hpp"

int		main()
{
	Zombie *lala = zombieHorde(4, "toto");

	for (int i = 0; i < 4; i++) {
		lala[i].announce();
	}
	delete [] lala;
}
