#include "Cat.hpp"

Cat::Cat(): Animal("Cat") {

	std::cout << "Default Cat constructor called" << std::endl;
	CatBrain = new Brain();
}

Cat::Cat( const Cat & src ): Animal(src) {

	std::cout << "Copy Cat constructor called" << std::endl;
	CatBrain = new Brain(*src.CatBrain);
}

Cat::~Cat() {

	std::cout << "Destructor Cat called" << std::endl;
	delete CatBrain;
}

Cat & 	Cat::operator= ( const Cat & src) {

	if (this != &src)
	{
		delete CatBrain;
		CatBrain = new Brain(*src.CatBrain);
	}
	return *this;
}

void		Cat::makeSound() const {

	std::cout << _type << " Miaou Miaou Miaou Miaou !" << std::endl;
}

Brain *	Cat::getBrain() const {

	return (CatBrain);
}
