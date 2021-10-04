#ifndef SHRUBBERY_CREATION_FORM_H
#define SHRUBBERY_CREATION_FORM_H

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form {

public:

	ShrubberyCreationForm();
	~ShrubberyCreationForm() {};
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const & src);

	ShrubberyCreationForm & operator=(ShrubberyCreationForm const & rhs);
	void					executeForm() const;
	Form *					clone(std::string target);

private:

	std::string _target;
};

#endif