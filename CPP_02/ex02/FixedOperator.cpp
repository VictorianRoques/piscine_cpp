#include "Fixed.hpp"

std::ostream & operator << (std::ostream & o, Fixed const & src) {
	
	o << src.toFloat();
	return o;
}

Fixed & Fixed::operator = (const Fixed & src) {

	if (this != &src)
		this->_fixedValue = src.getRawBits();
	return *this;
}

Fixed	Fixed::operator + ( Fixed const & src) const {

	return Fixed (this->toFloat() + src.toFloat());
}

Fixed	Fixed::operator - ( Fixed const & src) const {

	return Fixed ( this->toFloat() - src.toFloat());
}

Fixed	Fixed::operator / ( Fixed const & src) const {
	
	return Fixed ( this->toFloat() / src.toFloat());
}

Fixed	Fixed::operator * ( Fixed const & src) const {

	return Fixed ( this->toFloat() * src.toFloat());
}

bool	Fixed::operator > (Fixed const & src ) const {
	
	return ( this->toFloat() > src.toFloat() );
}

bool	Fixed::operator < (Fixed const & src ) const {
	
	return ( this->toFloat() < src.toFloat() );
}

bool	Fixed::operator >= (Fixed const & src ) const {
	
	return ( this->toFloat() >= src.toFloat() );
}

bool	Fixed::operator <= (Fixed const & src ) const {
	
	return ( this->toFloat() <= src.toFloat() );
}

bool	Fixed::operator == (Fixed const & src ) const {
	
	return ( this->toFloat() == src.toFloat() );
}

bool	Fixed::operator != (Fixed const & src ) const {
	
	return ( this->toFloat() != src.toFloat() );
}

Fixed & Fixed::operator ++ ( void ) {

	++this->_fixedValue;
	return (*this);
}

Fixed	Fixed::operator ++ ( int ) {

	Fixed tmp = *this;
	++_fixedValue;
	return (tmp);
}

Fixed & Fixed::operator -- ( void ) {

	--this->_fixedValue;
	return (*this);
}

Fixed	Fixed::operator -- ( int ) {

	Fixed tmp = *this;
	--this->_fixedValue;
	return (*this);
}

Fixed & Fixed::min( Fixed & i, Fixed & j )
{
	return (i < j ? i : j);
}

Fixed const & Fixed::min( Fixed const & i, Fixed const & j )
{
	return (i < j ? i : j);
}

Fixed & Fixed::max( Fixed & i, Fixed & j )
{
	return (i > j ? i : j);
}

Fixed const & Fixed::max( Fixed const & i, Fixed const & j )
{
	return (i > j ? i : j);
}

