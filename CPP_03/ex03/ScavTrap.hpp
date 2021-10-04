#ifndef SCAP_TRAP_H
# define SCAP_TRAP_H

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
	public:

	ScavTrap ();
	ScavTrap (std::string Name);
	ScavTrap(const ScavTrap & src);
	~ScavTrap();

	ScavTrap & operator = (const ScavTrap & src);

	void		attack(std::string const & target);
	void		guardGate();

};

#endif