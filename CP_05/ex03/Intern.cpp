#include "Intern.hpp"

Intern::Intern()
{
	formCatalogue[0] = new ShrubberyCreationForm();
	formCatalogue[1] = new RobotomyRequestForm();
	formCatalogue[2] = new PresidentialPardonForm();
}

Intern::Intern(Intern const & src) {

	*this = src;
}

Intern &	Intern::operator=(Intern const & rhs) {

	if (this != &rhs)
	{
		for (int i = 0; i < 3; i++)
		{
			formCatalogue[i] = rhs.formCatalogue[i];
		}
	}
	return *this;
}

Form *	Intern::makeForm(std::string formName, std::string target) {

	for (int i = 0; i < 3; i++)
	{
		if (formName == formCatalogue[i]->getName())
		{
			Form * clone = formCatalogue[i]->clone(target);
			std::cout << "Intern creates " << *clone << std::endl;
			return clone;
		}
	}
	throw Intern::UnknowFormName();
}

Intern::~Intern() {

	for (int i = 0; i < 3; i++)
	{
		delete formCatalogue[i];
	}
}