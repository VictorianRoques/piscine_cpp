#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form("presidential pardon", 25, 5), _target("Anonymous") {}

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("presidential pardon", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) { *this = src; }

PresidentialPardonForm &	PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs) {

	if (this != &rhs)
	{
		setSignedState(rhs.getSigned());
	}
	return *this;
}

void	PresidentialPardonForm::executeForm() const {

	std::cout << _target << " have been forgiven by Zafod Beeblebrox" << std::endl;
}

Form *		PresidentialPardonForm::clone(std::string target) {
	return new PresidentialPardonForm(target);
}