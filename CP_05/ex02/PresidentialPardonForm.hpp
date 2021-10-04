#ifndef PRESIDENTIAL_PARDON_FORM_H
#define PRESIDENTIAL_PARDON_FORM_H

#include "Form.hpp"

class PresidentialPardonForm : public Form {

public:

	PresidentialPardonForm();
	~PresidentialPardonForm() {};
	PresidentialPardonForm(std::string name);
	PresidentialPardonForm(PresidentialPardonForm const & src);

	PresidentialPardonForm & operator=(PresidentialPardonForm const & rhs);
	void					executeForm() const;

private:

	std::string _target;
};

#endif