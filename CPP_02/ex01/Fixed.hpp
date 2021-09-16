#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed {

private:

	int _fixedValue;
	static const int _fracBits = 8;

public:

	Fixed( void );
	Fixed ( const int n);
	Fixed ( const float n);
	Fixed ( const Fixed & src );
	~Fixed ( void );

	Fixed & operator = (const Fixed & src );
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	int		toInt ( void ) const ;

	void	setRawBits( float const raw );
	float	toFloat ( void ) const;
};

std::ostream & operator << ( std::ostream & o, Fixed const & src);

#endif