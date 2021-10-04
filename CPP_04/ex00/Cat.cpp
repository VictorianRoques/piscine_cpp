#include "Cat.hpp"

Cat::Cat(): Animal("Cat") {

	std::cout << "Default Cat constructor called" << std::endl;
}

Cat::Cat( const Cat & src ): Animal(src) {

	std::cout << "Copy Cat constructor called" << std::endl;
}

Cat::~Cat() {

	std::cout << "Destructor Cat called" << std::endl;
}

Cat & 	Cat::operator= ( const Cat & src) {
	(void)src;
	return *this;
}

void		Cat::makeSound() const {

	std::cout << _type << " Miaou Miaou Miaou Miaou !" << std::endl;
}
