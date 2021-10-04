#include "Cure.hpp"

Cure::Cure(): AMateria("cure") {

	std::cout << "Default Cure constructor called" << std::endl;
}

Cure::Cure(Cure const & src): AMateria(src) {

	std::cout << "Copy constructor called" << std::endl;
}

Cure::~Cure() {

	std::cout << "Destructor Cure called" << std::endl;
};

Cure & Cure::operator=(Cure const & src) {
	(void)src;
	return *this;
}

Cure * Cure::clone() const {

	return new Cure();
}

void	Cure::use(ICharacter & target) {

	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
