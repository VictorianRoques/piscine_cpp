#include "Fixed.hpp"

Fixed::Fixed ( void ) {

	std::cout << "Default constructor called" << std::endl;
	this->_fixedValue = 0;
};

Fixed::Fixed ( const Fixed & src) {

	std::cout << "Copy constructor called" << std::endl;
	this->_fixedValue = src._fixedValue;
} 

Fixed & Fixed::operator = (const Fixed & src) {

	std::cout << "Assignation operator called" << std::endl;
	this->_fixedValue = src.getRawBits();
	return *this;
}

Fixed::~Fixed( void ) {

	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits( void )  const {

	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedValue);
};

void	Fixed::setRawBits( int const raw ) {

	std::cout << "setRawBits member function called" << std::endl;
	this->_fixedValue = raw << _fracBits;
};
