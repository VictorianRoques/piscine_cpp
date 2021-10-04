#ifndef FRAG_TRAP_H
# define FRAG_TRAP_H

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	public:

	FragTrap ();
	FragTrap (std::string Name);
	FragTrap(const FragTrap & src);
	~FragTrap();

	FragTrap & operator= (const FragTrap & src);
	
	void		attack(std::string const & target);
	void		highFivesGuys(void);

};

#endif