#ifndef FORM_H
#define FORM_H

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

private:

	std::string const 	_name;
	bool 				_signed;
	int	const			_signedGrade;
	int	const			_executeGrade;

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

	class FormAlreadySigned : public std::exception {
		virtual const char* what() const throw () {
			return "form is already signed\n";
		}
	};

	Form();
	Form(std::string name, int signedGrade, int executeGrade);
	Form(Form const & src);
	~Form() {};

	Form & 				operator=(Form const & rhs);
	std::string const	getName() const;
	bool				getSigned() const;
	int					getSignedGrade() const;
	int					getExecuteGrade() const;
	void				beSigned(Bureaucrat const & bureaucrat);

};

std::ostream & operator<<(std::ostream & o, Form const & form);

#endif