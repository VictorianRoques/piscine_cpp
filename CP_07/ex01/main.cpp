#include "iter.hpp"
#include <iostream>
#include <string.h>

class Test {

public:
	Test( void ) : _n( 12 ) { return; }
	int get( void ) const { return this->_n; }
private:
	int _n;

};
std::ostream & operator<<( std::ostream & o, Test const & rhs ) { o << rhs.get(); return o; }


int		main()
{
	char arr[] = "bonjour les amis";
	iter(arr, strlen(arr), Display);
	std::cout << std::endl;

	int arrInt[] = {1, 2, 3 , 4 , 5};
	iter(arrInt, 5, Display);
	std::cout << std::endl;

	int 	tab[] = { 0, 1, 2, 3, 4 };
	Test 	tab2[5];

	iter(tab, 5, Display);
	std::cout << std::endl;
	iter(tab2, 5, Display);
	std::cout << std::endl;

}