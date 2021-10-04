#ifndef ROBOTOMY_REQUEST_FORM_H
#define ROBOTOMY_REQUEST_FORM_H

#include "Form.hpp"

class RobotomyRequestForm : public Form {

public:

	RobotomyRequestForm();
	RobotomyRequestForm(RobotomyRequestForm const & src);
	RobotomyRequestForm(std::string name);
	~RobotomyRequestForm() {};

	RobotomyRequestForm & 	operator=(RobotomyRequestForm const & rhs);
	void					executeForm() const;

private:

	std::string _target;
};

#endif