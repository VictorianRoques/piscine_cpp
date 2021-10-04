#include "ClapTrap.hpp"

int		main( void )
{
	ClapTrap Toto;
	ClapTrap Mireille("Mireille");
	ClapTrap JeanMichel("JeanMichel");
	
	Toto = Mireille;

	Toto.attack("Jean Michel");
	JeanMichel.takeDamage(5);

	ClapTrap JeanMichelCopy(JeanMichel);
	Toto.attack("JeanMichel Copy");
	JeanMichelCopy.takeDamage(3);

	JeanMichelCopy.beRepaired(2);

}
