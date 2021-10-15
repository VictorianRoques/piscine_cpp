#include "whatever.hpp"
#include <iostream>

class Test {

public:

	Test(int n) { _n = n;};
	int		get() const { return _n; };
	Test &	operator=(const Test &b) {
		_n = b._n;
		return *this;
	}
	bool	operator <=(const Test &b) const {
		if (_n <= b._n)
			return true;
		return false;
	}
	bool	operator>=(const Test &b) const {
		if (_n >= b._n)
			return true;
		return false;
	}

private:
	int _n;
};
std::ostream & operator<<(std::ostream & o, Test const & rhs) {o << rhs.get(); return o;}

int		main()
{
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	float e = 152.43;
	float f = 453.41;
	::swap( e, f );
	std::cout << "e = " << e << ", f = " << f << std::endl;
	std::cout << "min( e, f ) = " << ::min( e, f ) << std::endl;
	std::cout << "max( e, f ) = " << ::max( e, f ) << std::endl;

	std::cout << "Object test" << std::endl;
	Test x(42);
	Test y(22);

	swap(x, y);
	std::cout << "x = " << x << ", y = " << y << std::endl;
	std::cout << "min( x, y ) = " << ::min( x, y ) << std::endl;
	std::cout << "max( x, y ) = " << ::max( x, y ) << std::endl;
}