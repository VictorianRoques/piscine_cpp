#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat {

private:

	std::string const 	_name;
	int 				_grade;

public:

	class GradeTooHighException : public std::exception {
		virtual const char* what() const throw (){
			return "grade too hight";
		}
	};

	class GradeTooLowException : public std::exception {
		virtual const char* what() const throw () {
			return "grade too low";
		}
	};

	Bureaucrat();
	Bureaucrat(std::string const name, int grade);
	Bureaucrat(Bureaucrat const & src);
	~Bureaucrat() {};

	Bureaucrat & operator=(Bureaucrat const & rhs);
	std::string const	getName() const;
	int					getGrade() const;
	void				upGrade();
	void				downGrade();
	void				signForm(Form & form);

};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & bureaucrat);

#endif