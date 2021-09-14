#include "Zombie.hpp"

/*	Case 1: Assigned
	To assign a Name to a Zombie, create a tempory object and assign it to the original object.
	The tempory variable/objects on the right is destructed 

	Case 2: Created
	If the tempory object is created and not assigned there is no process of releasing the right object.
	The object survive until the end of the main.

*/

int		main()
{
	Zombie *Assigned = zombieHorde(4, "toto");

	for (int i = 0; i < 4; i++) {
		Assigned[i].announce();
	}
	delete [] Assigned;

	Zombie Created[2] = {Zombie("Michel"), Zombie("Mireille")};
	for (int i = 0; i < 2; i++) {
		Created[i].announce();
	}
}
