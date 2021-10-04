
#include "FragTrap.hpp"

int		main( void )
{
	FragTrap Toto;
	FragTrap Mireille("Mireille");
	Toto = Mireille;
	
	FragTrap JeanMichel("Jean Michel");
	Toto.attack("JeanMichel");
	JeanMichel.takeDamage(30);

	FragTrap JeanMichelCopy(JeanMichel);
	Toto.attack("Jean Michel Copy");
	JeanMichelCopy.takeDamage(30);
	JeanMichelCopy.beRepaired(10);

	Mireille.highFivesGuys();
}