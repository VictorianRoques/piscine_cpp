#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int		main( void )
{
	ScavTrap Toto;
	ScavTrap Mireille("Mireille");
	Toto = Mireille;
	
	ScavTrap JeanMichel("Jean Michel");
	Toto.attack("JeanMichel");
	JeanMichel.takeDamage(20);

	ScavTrap JeanMichelCopy(JeanMichel);
	Toto.attack("Jean Michel Copy");
	JeanMichelCopy.takeDamage(20);
	JeanMichel.takeDamage(15);
	JeanMichelCopy.beRepaired(10);

	Mireille.guardGate();

	ScavTrap *lala = new ScavTrap("Pute");
	ScavTrap *tata = lala;

	lala->takeDamage(20);
	tata->takeDamage(20);

	ScavTrap papa("Jeanm iche");
	ScavTrap rara = papa;

	papa.takeDamage(20);
	rara.takeDamage(20);
}
