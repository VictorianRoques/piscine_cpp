#include <iostream>
#include "Fixed.hpp"

int main(void) {
	
Fixed a(2);
Fixed b(4);

std::cout << "a: " << a << std::endl;
a++;
std::cout << "a++: " << a << std::endl;
++a;
std::cout << "++a: " << a << std::endl;
a--;
std::cout << "a--: " << a << std::endl;
--a;
std::cout << "--a: " << a << std::endl;
--a;
std::cout << "--a: " << a << std::endl;

std::cout << "a: " <<  a << "b: " << b << std::endl;
std::cout << "a + b = " << a + b << std::endl;
std::cout << "a - b = " << a - b << std::endl;
std::cout << "a * b = " << a * b << std::endl;
std::cout << "a / b = " << a / b << std::endl;

if (a < b)
	std::cout <<  "a is < b" << std::endl;
if (a > b)
	std::cout <<  "a is > b" << std::endl;
if (a >= b)
	std::cout <<  "a is >= b" << std::endl;
if ( a <= b)
	std::cout <<  "a is <= b" << std::endl;
if (a == b)
	std::cout <<  "a == b" << std::endl;
if ( a != b)
	std::cout <<  "a is != b" << std::endl;

std::cout <<"max a b " << Fixed::max(a, b) << std::endl;
std::cout <<"min a b " << Fixed::min(a, b) << std::endl;
Fixed d;
Fixed const c(Fixed(5.05f) * Fixed(2));
std::cout << d << std::endl;
std::cout << ++d << std::endl;
std::cout << d << std::endl;
std::cout << d++ << std::endl;
std::cout << d << std::endl;
std::cout << c << std::endl;
std::cout << Fixed::max(d, c) << std::endl;
	return 0;
}