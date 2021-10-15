#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): Form("robotomy request", 72, 137), _target("Anonymous") {}

RobotomyRequestForm::RobotomyRequestForm(std::string target):  Form("RobotomyRequestForm", 72, 137), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src): Form(src) { _target = src._target;}

RobotomyRequestForm &	RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs) {

	if (this != &rhs)
	{
		setSignedState(rhs.getSigned());
		_target = rhs._target;
	}
	return *this;
}

void 	RobotomyRequestForm::executeForm() const {

	srand(time(NULL));
	if (int r = rand() % 2)
		std::cout << "Zzzzzzzziiiiiit Zzzzzziiiitttt !!! " << _target << " has been robotomized" << std::endl;
	else
		std::cout << "Failed to robotomized " << _target << std::endl;
}
