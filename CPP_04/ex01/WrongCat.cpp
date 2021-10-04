#include "WrongCat.hpp"

WrongCat::WrongCat(): Animal("WrongCat") {

	std::cout << "Default WrongCat constructor called" << std::endl;
	CatBrain = new Brain();
}

WrongCat::WrongCat( const WrongCat & src ) {

	std::cout << "Copy WrongCat constructor called" << std::endl;
	*this = src;
}

WrongCat::~WrongCat() {

	std::cout << "Destructor WrongCat called" << std::endl;
	delete CatBrain;
}

WrongCat & 	WrongCat::operator= ( const WrongCat & src) {

	if (this != &src)
	{
		CatBrain = src.CatBrain;
	}
	return *this;
}

void		WrongCat::makeSound() const {

	std::cout << _type << " Miaou Miaou Miaou Miaou !" << std::endl;
}

Brain *	WrongCat::getBrain() const {

	return (CatBrain);
}
