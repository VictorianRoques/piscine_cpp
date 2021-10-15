#include "Base.hpp"
#include <stdlib.h>
#include <iostream>

Base *	generate(void)
{
	int r = rand() % 3;
	if (r == 0)
		return new A;
	if (r == 1)
		return new B;
	return new C;
}

void	identify(Base * p)
{
	A * childA = dynamic_cast<A *>(p);
	if (childA)
		std::cout << "A";
	B * childB = dynamic_cast<B *>(p);
	if (childB)
		std::cout << "B";
	C * childC = dynamic_cast<C *>(p);
	if (childC)
		std::cout << "C";
	std::cout << std::endl;
}


void	identify(Base & p)
{
	try {
		A & childA = dynamic_cast<A &>(p);
		static_cast<void> (childA);
		std::cout << "A";
	}
	catch (std::exception &e) {}
	try {
		B & childB = dynamic_cast<B &>(p);
		static_cast<void> (childB);
		std::cout << "B";
	}
	catch (std::exception &e) {}
	try {
		C & childC = dynamic_cast<C &>(p);
		static_cast<void> (childC);
		std::cout << "C";
	}
	catch (std::exception &e) {}
	std::cout << std::endl;
}

int		main()
{
	for(int i = 0; i < 10; i++)
	{
		Base *base = generate();
		identify(base);
		identify(*base);
		delete(base);
	}
	return 0;
}