#include "AMateria.hpp"

AMateria::AMateria() {

	std::cout << "Default AMateria constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type): _type(type) {

	std::cout << "Parameter AMateria constructor called" << std::endl;
}

AMateria::AMateria(AMateria const & src): _type(src._type) {
	
	std::cout << "Copy AMateria constructor called" << std::endl;
}

AMateria::~AMateria() {

	std::cout << "Destructor AMateria called" << std::endl;
}

AMateria &	AMateria::operator=(AMateria const & src) {
	
	(void)src;
	return *this;
}

std::string const & AMateria::getType() const {

	return (this->_type);
}

void	AMateria::use(ICharacter & target) {

	std::cout << "use" <<  target.getName() << std::endl;
}
