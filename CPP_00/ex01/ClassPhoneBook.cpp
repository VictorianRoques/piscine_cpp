#include "ClassPhoneBook.hpp"

phoneBook::phoneBook() {
	nb_contact = 0;
}

void	phoneBook::generateFirstColumn() {
	
	std::cout << "|" << std::setw(10) << "index" << "|";
	std::cout << std::setw(10) << "first name" << "|";
	std::cout << std::setw(10) << "last name" << "|";
	std::cout << std::setw(10) << "nickname" << "|";
	std::cout << std::endl;
}

void	phoneBook::wichContactDisplay() {

	int 	i;

	std::cout << "Wich contact do you want to see (enter index)" << std::endl;
	while (true)
	{
		std::cin >> i;
		if (!std::cin)
		{
			std::cin.clear();
			std::cin.ignore();
			continue;
		}
		else if (i < 0 || i >= nb_contact)
		{
			std::cout << "Wrong index" << std::endl;
			std::cin.clear();
			continue;
		}
		else break;
	}
	contact[i].display();
}

void	phoneBook::display() {
	if (nb_contact == 0)
	{
		std::cout << "No contact available, ADD contact to phonebook" << std::endl;
		return ; 
	}
	generateFirstColumn();
	for (int i = 0; i < nb_contact; i++)
		contact[i].fancyDisplay();
	wichContactDisplay();
}

void	phoneBook::addContact() {
	if (nb_contact > 7)
		std::cout << "Phonebook is full" << std::endl;
	else
	{
		contact[nb_contact].addContact(nb_contact);
		nb_contact++;	
	}
}
