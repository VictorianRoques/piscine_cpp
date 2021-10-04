#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): Form("robotomy request", 72, 137), _target("Anonymous") {}

RobotomyRequestForm::RobotomyRequestForm(std::string target):  Form("robotomy request", 72, 137), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) { *this = src; }

RobotomyRequestForm &	RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs) {

	if (this != &rhs)
	{
		setSignedState(rhs.getSigned());
	}
	return *this;
}

void 	RobotomyRequestForm::executeForm() const {

	srand (time(NULL));
	if (int r = rand() % 2)
		std::cout << "Zzzzzzzziiiiiit Zzzzzziiiitttt !!! " << _target << " has been robotomized" << std::endl;
	else
		std::cout << "Failed to robotomized " << _target << std::endl;
}

Form *		RobotomyRequestForm::clone(std::string target) {
		return new RobotomyRequestForm(target);
}
