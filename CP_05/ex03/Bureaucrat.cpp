#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("Satan"), _grade(150) { }

Bureaucrat::Bureaucrat(std::string const name, int grade): _name(name), _grade(grade) {

	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const & src): _name(src.getName()) { *this = src; }

Bureaucrat::~Bureaucrat() {}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs) {

	if (this != &rhs)
	{
		_grade = rhs._grade;
	}
	return *this;
}

std::string const Bureaucrat::getName() const {
	
	return _name;
}

int			Bureaucrat::getGrade() const {

	return _grade;
}

void		Bureaucrat::upGrade() {

	if (_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	_grade--;
}

void		Bureaucrat::downGrade() {

	if (_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade++;
}

void		Bureaucrat::signForm(Form & form) {

	try {
		form.beSigned(*this);
		std::cout << *this << " signs " << form << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << *this << " cannot sign " << form.getName() << " because " << e.what() << std::endl;
	}
}

void		Bureaucrat::executeForm(Form const & form) {

	try {
		form.execute(*this);
		std::cout << *this << " executs " << form << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << *this << " cannot execute " << form.getName() << " because " << e.what() << std::endl;
	}
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & bureaucrat)
{
	o << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return o;
}