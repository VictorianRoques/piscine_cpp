#include "ClassPhoneBook.hpp"
#include <iostream>

int		main(void)
{
	std::string		input;
	phoneBook	phonebook;

	std::cout << "Welcome in our awesome phonebook" << std::endl;
	std::cout << "Wait for SEARCH / ADD / EXIT command" << std::endl;
	while (1)
	{
		std::cin >> input;
		std::cin.ignore();
		if (input == "SEARCH")
			phonebook.display();
		else if (input == "ADD")
			phonebook.addContact();
		else if (input == "EXIT")
		{
			std::cout << "Good bye !" << std::endl;
			return (0);
		}
	}
}