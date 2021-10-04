#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	
	std::cout << "Default WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string name): _type(name) {

	std::cout << "Parameter WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal & src ): _type(src.getType()) {

	std::cout << "Copy WrongAnimal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal() {

	std::cout << "Destructor WrongAnimal called" << std::endl;
}

WrongAnimal & 	WrongAnimal::operator= ( const WrongAnimal & src) {
	(void)src;
	return *this;
}

std::string	WrongAnimal::getType() const {

	return _type;
}

void		WrongAnimal::makeSound() const {

	std::cout << _type << " Grrrrrrrrrrrrr" << std::endl;
}
