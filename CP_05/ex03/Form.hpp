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
			return "form is already signed";
		}
	};

	class FormNotSigned : public std::exception {
		virtual const char* what() const throw () {
			return "form is not signed";
		}
	};

	Form();
	Form(std::string name, int signedGrade, int executeGrade);
	Form(Form const & src);
	virtual ~Form();

	Form & 				operator=(Form const & rhs);
	std::string const	getName() const;
	bool				getSigned() const;
	int					getSignedGrade() const;
	int					getExecuteGrade() const;
	void				setSignedState(bool isSigned);
	void				beSigned(Bureaucrat const & bureaucrat);
	void	 			execute (Bureaucrat const & executor) const;
	virtual void		executeForm() const = 0;
	virtual Form *		clone(std::string target) = 0;

};

std::ostream & operator<<(std::ostream & o, Form const & form);

#endif