#include "Animal.hpp"

Animal::Animal() {

	std::cout << "Default Animal constructor called" << std::endl;
}

Animal::Animal(std::string name): _type(name) {

	std::cout << "Paramater Animal constructor called" << std::endl;
}

Animal::Animal( const Animal & src ): _type(src._type) {

	std::cout << "Copy Animal constructor called" << std::endl;
}

Animal::~Animal() {

	std::cout << "Destructor Animal called" << std::endl;
}

Animal & 	Animal::operator= ( const Animal & src) {

	(void)src;
	return *this;
}

std::string	Animal::getType() const {

	return _type;
}
