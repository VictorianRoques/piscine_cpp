#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

# include <string>
# include <iostream>
# include <iomanip>

class Contact {

private:

	std::string	firstName;
	std::string	lastName;
	std::string	nickname;
	std::string	phoneNumber;
	std::string	darkestSecret;
	int		index;

	void	displayColumn(std::string toto);
	void	add_field(std::string field, std::string *value);

public:

	void	display ();
	void	fancyDisplay();
	void	addContact(int id_contact);
};

#endif
