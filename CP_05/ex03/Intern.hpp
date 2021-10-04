#ifndef INTERN_H
# define INTERN_H

# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern {

private:

	Form *formCatalogue[3];

public:

	class UnknowFormName : public std::exception {
		virtual const char* what() const throw () {
			return "Unknow form name";
		}
	};

	Intern();
	~Intern();
	Intern(Intern const & src);
	Intern & operator=(Intern const & rhs);
	Form *	makeForm(std::string formName, std::string target);
};

#endif