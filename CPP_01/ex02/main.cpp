#include <string>
#include <iostream>

int		main()
{
	std::string		brain = "HI THIS IS BRAIN";
	std::string*		brainPTR = &brain;
	std::string&		brainREF = brain;

	std::cout << "address:" << &brain << std::endl;
	std::cout << "address:" << brainPTR << " (ptr)" << std::endl;
	std::cout << "address:" << &brainREF << " (ref)" << std::endl;

	std::cout << brain << std::endl;
	std::cout << *brainPTR << " (ptr)" << std::endl;
	std::cout << brainREF << " (ref)" << std::endl;
}
