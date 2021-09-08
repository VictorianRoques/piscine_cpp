#include "ClassContact.hpp"

void	Contact::displayColumn(std::string toto) {
	std::string str;
	
	if (toto.length() > 10)
		str = toto.substr(0, 10).replace(9, 10, ".");
	else
		str = toto;
	std::cout << std::setw(10) << str << "|";
}

void	Contact::add_field(std::string field, std::string *value)
{
	while (true)
	{
		std::cout << field;
		std::getline(std::cin, *value);
		if ((*value).empty())
			continue;
		else break;
	}
}

void	Contact::display ()
{
	std::cout << "first name: " << firstName << std::endl;
	std::cout << "last name: " << lastName << std::endl; 
	std::cout << "nickname: " << nickname << std::endl;
	std::cout << "phone number: " << phoneNumber << std::endl;
	std::cout << "darkest secret: " << darkestSecret << std::endl;
}
void	Contact::fancyDisplay()
{
	std::cout << "|" <<  std::setw(10) << index << "|";
	displayColumn(firstName);
	displayColumn(lastName);
	displayColumn(nickname);
	std::cout << std::endl;
}

void	Contact::addContact(int id_contact) {
	add_field("first name: ", &firstName);
	add_field("last name: ", &lastName);
	add_field("nickname :", &nickname);
	add_field("phone number: ", &phoneNumber);
	add_field("darkest secret :", &darkestSecret);
	index = id_contact;
}