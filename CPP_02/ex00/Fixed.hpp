#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed {

private:

	int _fixedValue;
	static const int _fracBits = 8;

public:

	Fixed( void );
	Fixed ( const Fixed & src );
	~Fixed ( void );

	Fixed & operator = (const Fixed & src );
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

};

#endif