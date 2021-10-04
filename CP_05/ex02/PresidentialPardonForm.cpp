#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form("presidential pardon", 25, 5), _target("Anonymous") {}

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("PresidentialPardonForm", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src): Form(src) { _target = src._target; }

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs) {

	if (this != &rhs)
	{
		setSignedState(rhs.getSigned());
		_target = rhs._target;
	}
	return *this;
}

void	PresidentialPardonForm::executeForm() const {

	std::cout << _target << " have been forgiven by Zafod Beeblebrox" << std::endl;
}
