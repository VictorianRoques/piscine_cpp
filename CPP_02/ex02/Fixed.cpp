#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed ( void ) {

	this->_fixedValue = 0;
};

Fixed::Fixed ( const Fixed & src) {

	this->_fixedValue = src._fixedValue;
}

Fixed::Fixed ( const int n) {

	this->setRawBits(n);
}

int		Fixed::getRawBits( void )  const {

	return (this->_fixedValue);
};

void	Fixed::setRawBits( int const raw ) {

	this->_fixedValue = raw << Fixed::_fracBits;
};

int		Fixed::toInt ( void ) const {

	return (this->_fixedValue >> Fixed::_fracBits);
}

Fixed::Fixed (const float n) {

	this->setRawBits(n);
}

void	Fixed::setRawBits ( float const raw ) {
	
	this->_fixedValue = round(raw * (1 << Fixed::_fracBits));
}

float	Fixed::toFloat ( void ) const {

	return static_cast<float>(this->_fixedValue) / ( 1 << Fixed::_fracBits);
}
