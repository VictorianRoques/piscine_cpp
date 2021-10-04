#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat") {

	std::cout << "Default WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat( const WrongCat & src ): WrongAnimal(src) {

	std::cout << "Copy WrongCat constructor called" << std::endl;
}

WrongCat::~WrongCat() {

	std::cout << "Destructor WrongCat called" << std::endl;
}

WrongCat & 	WrongCat::operator= ( const WrongCat & src) {
	(void)src;
	return *this;
}

void		WrongCat::makeSound() const {

	std::cout << _type << " Miaou Miaou Miaou Miaou !" << std::endl;
}
