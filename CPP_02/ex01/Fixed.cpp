#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed ( void ) {

	std::cout << "Default constructor called" << std::endl;
	this->_fixedValue = 0;
};

Fixed::Fixed ( const Fixed & src) {

	std::cout << "Copy constructor called" << std::endl;
	this->_fixedValue = src._fixedValue;
}

Fixed::Fixed ( const int n) {

	std::cout << "Integer constructor called" << std::endl;
	this->setRawBits(n);

}

int		Fixed::getRawBits( void )  const {

	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedValue);
};

void	Fixed::setRawBits( int const raw ) {

	std::cout << "setRawBits member function called" << std::endl;
	this->_fixedValue = raw << Fixed::_fracBits;
};

int		Fixed::toInt ( void ) const {

	return (this->_fixedValue >> Fixed::_fracBits);
}

Fixed::Fixed (const float n) {

	std::cout << "Float constructor called" << std::endl;
	this->setRawBits(n);
}

void	Fixed::setRawBits ( float const raw ) {
	
	std::cout << "setRawbits float member function called" << std::endl;
	this->_fixedValue = round(raw * (1 << Fixed::_fracBits));
}

float	Fixed::toFloat ( void ) const {

	return static_cast<float>(this->_fixedValue) / ( 1 << Fixed::_fracBits);
}

Fixed & Fixed::operator = (const Fixed & src) {

	std::cout << "Assignation operator called" << std::endl;
	if (this != &src)
		this->_fixedValue = src.getRawBits();
	return *this;
}

std::ostream & operator << (std::ostream & o, Fixed const & src)
{
	o << src.toFloat();
	return o;
}

Fixed::~Fixed( void ) {

	std::cout << "Destructor called" << std::endl;
}