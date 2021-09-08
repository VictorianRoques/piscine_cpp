#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include "ClassContact.hpp"

class  phoneBook {
	private:
		Contact contact[8];
		int		nb_contact;

		void wichContactDisplay();
		void generateFirstColumn();

	public:
		phoneBook();
		void display();
		void addContact();
};

#endif