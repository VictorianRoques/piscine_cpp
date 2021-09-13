#include <string>
#include <iostream>

int		main()
{
	std::string		brain = "HI THIS IS BRAIN";
	std::string*	ptr_brain = &brain;
	std::string&	ref_brain = brain;

	std::cout << "address:" << &brain << std::endl;
	std::cout << "address:" << ptr_brain << " (ptr)" << std::endl;
	std::cout << "address:" << &ref_brain << " (ref)" << std::endl;

	std::cout << brain << std::endl;
	std::cout << *ptr_brain << " (ptr)" << std::endl;
	std::cout << ref_brain << " (ref)" << std::endl;
}
