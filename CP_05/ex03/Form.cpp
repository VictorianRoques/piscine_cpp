#include "Form.hpp"

Form::Form():  _name("Default form"), _signed(false), _signedGrade(150), _executeGrade(150) {}

Form::Form(std::string name, int signedGrade, int executeGrade): 
_name(name), _signed(false), _signedGrade(signedGrade), _executeGrade(executeGrade) {

	if (_signedGrade < 1 || _executeGrade < 1)
		throw Form::GradeTooHighException();
	if (_signedGrade > 150 || _executeGrade > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const & src): _name(src.getName()), _signed(false),
	_signedGrade(src.getSignedGrade()), _executeGrade(src.getExecuteGrade()) { *this = src; }

Form::~Form() {}

Form & Form::operator=(Form const & rhs) {

	if (this != &rhs)
	{
		_signed = rhs._signed;
	}
	return *this;
}
 
std::string	const	Form::getName() const { return _name; }

bool				Form::getSigned() const { return _signed ;}

int					Form::getSignedGrade() const { return _signedGrade; }

int					Form::getExecuteGrade() const { return _executeGrade; }

void				Form::setSignedState(bool isSigned) { _signed = isSigned; }

void				Form::beSigned(Bureaucrat const & bureaucrat) {

	if (_signed == true)
		throw Form::FormAlreadySigned(); 
	if (bureaucrat.getGrade() > _signedGrade)
		throw Form::GradeTooLowException();
	_signed = true;
}

void		Form::execute(Bureaucrat const & executor) const {

	if (_signed == false)
		throw Form::FormNotSigned();
	if (executor.getGrade() > _executeGrade)
		throw Form::GradeTooLowException();
	executeForm();
}

std::ostream &	operator<<(std::ostream & o, Form const & form) {

	if (form.getSigned() == true)
		o << form.getName() << " Form is signed, require signed grade: " <<
		form.getSignedGrade() << ", require execute grade: " << form.getExecuteGrade();
	else
		o << form.getName() << " Form is not signed, require signed grade: " <<
		form.getSignedGrade() << ", require execute grade: " << form.getExecuteGrade();
	return o;
}