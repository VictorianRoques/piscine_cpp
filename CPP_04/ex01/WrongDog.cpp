#include "WrongDog.hpp"

WrongDog::WrongDog(): Animal("WrongDog") {

	std::cout << "Default WrongDog constructor called" << std::endl;
	DogBrain = new Brain();
}

WrongDog::WrongDog( const WrongDog & src ) {

	std::cout << "Copy WrongDog constructor called" << std::endl;
	*this = src;
}

WrongDog::~WrongDog() {

	std::cout << "Destructor WrongDog called" << std::endl;
	delete DogBrain;
}

WrongDog & 	WrongDog::operator= ( const WrongDog & src) {

	if (this != &src)
	{
		DogBrain = src.DogBrain;
	}
	return *this;
}

void		WrongDog::makeSound() const {

	std::cout << _type << " Wouf Wouf Wouf Wouf" << std::endl;
}

Brain *		WrongDog::getBrain() const {

	return (DogBrain);
}
