#include "Dog.hpp"

Dog::Dog(): Animal("Dog") {

	std::cout << "Default Dog constructor called" << std::endl;
}

Dog::Dog( const Dog & src ): Animal(src){

	std::cout << "Copy Dog constructor called" << std::endl;
}

Dog::~Dog() {

	std::cout << "Destructor Dog called" << std::endl;
}

Dog & 	Dog::operator= ( const Dog & src) {
	
	(void)src;
	return *this;
}

void		Dog::makeSound() const {

	std::cout << _type << " Wouf Wouf Wouf Wouf" << std::endl;
}
