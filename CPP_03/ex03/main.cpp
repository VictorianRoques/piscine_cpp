
#include "DiamondTrap.hpp"

int		main( void )
{
	DiamondTrap Toto;
	DiamondTrap Mireille("Mireille");
	Toto = Mireille;
	
	Toto.showAttributs();
	DiamondTrap JeanMichel("Jean Michel");
	Toto.attack("JeanMichel");
	JeanMichel.takeDamage(30);

	DiamondTrap JeanMichelCopy(JeanMichel);
	Toto.attack("Jean Michel Copy");
	JeanMichelCopy.takeDamage(30);
	JeanMichelCopy.beRepaired(10);

	Mireille.highFivesGuys();
	Mireille.guardGate();
	Mireille.whoAmI();
}