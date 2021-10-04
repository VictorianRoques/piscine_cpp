#include "Ice.hpp"

Ice::Ice(): AMateria("ice") {
	
	std::cout << "Default Ice construcor called" << std::endl;
}

Ice::Ice(Ice const & src): AMateria(src) {

	std::cout << "Copy Ice construcor called" << std::endl;
}

Ice::~Ice() {

	std::cout << "Default Ice construcor called" << std::endl;
}

Ice &	Ice::operator=(Ice const & src) {

	(void)src;
	return *this;
}

Ice *	Ice::clone() const {

	return new Ice();
}

void	Ice::use(ICharacter & target) {

	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl; 
}
