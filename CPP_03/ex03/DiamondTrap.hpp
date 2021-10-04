#ifndef DIAMOND_TRAP_H
# define DIAMOND_TRAP_H

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap {

	private:

	std::string _Name;

	public:

		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap & src);
		~DiamondTrap();

		DiamondTrap & operator = (const DiamondTrap & src);

		using ScavTrap::attack;
		void	whoAmI();
		void	showAttributs();
};

#endif