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
	~Fixed ( void ) { };

	Fixed & operator = ( Fixed const & src );
	Fixed	operator + ( Fixed const & src) const;
	Fixed	operator - ( Fixed const & src) const;
	Fixed	operator * ( Fixed const & src) const;
	Fixed	operator / ( Fixed const & src) const;

	bool	operator > (Fixed const & src )const;
	bool	operator < (Fixed const & src )const;
	bool	operator <= (Fixed const & src )const;
	bool	operator >= (Fixed const & src )const;
	bool	operator == (Fixed const & src )const;
	bool	operator != (Fixed const & src )const;

	Fixed &	operator ++ ( void );
	Fixed	operator ++ ( int );
	Fixed &	operator -- ( void );
	Fixed	operator -- ( int );

	static Fixed & min( Fixed & i, Fixed & j);
	static Fixed const & min( Fixed const & i, Fixed const & j);
	static Fixed & max( Fixed & i, Fixed & j);
	static Fixed const & max( Fixed const & i, Fixed const & j);

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	int		toInt ( void ) const ;

	void	setRawBits( float const raw );
	float	toFloat ( void ) const;
};

std::ostream &	operator << (std::ostream & o, Fixed const & src);


#endif