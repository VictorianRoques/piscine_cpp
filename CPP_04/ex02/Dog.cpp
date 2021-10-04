#include "Dog.hpp"

Dog::Dog(): Animal("Dog") {

	std::cout << "Default Dog constructor called" << std::endl;
	DogBrain = new Brain();
}

Dog::Dog( const Dog & src ): Animal(src) {
	
	std::cout << "Copy Dog constructor called" << std::endl;
	DogBrain = new Brain(*src.DogBrain);
}

Dog::~Dog() {

	std::cout << "Destructor Dog called" << std::endl;
	delete DogBrain;
}

Dog & 	Dog::operator= ( const Dog & src) {

	if (this != &src)
	{
		delete DogBrain;
		DogBrain = new Brain(*src.DogBrain);
	}
	return *this;
}

void		Dog::makeSound() const {

	std::cout << _type << " Wouf Wouf Wouf Wouf" << std::endl;
}

Brain *		Dog::getBrain() const {

	return (DogBrain);
}
