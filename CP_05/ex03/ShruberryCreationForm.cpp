#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): Form("shruberry creation", 145, 137), _target("Anonymous") {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("shruberry creation", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src): Form(src) {_target = src._target ; }

ShrubberyCreationForm &	ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs) {

	if (this != &rhs)
	{
		_target = rhs._target;
		setSignedState(rhs.getSigned());
	}
	return *this;
}

Form *		ShrubberyCreationForm::clone(std::string target) {
	return new ShrubberyCreationForm(target);
}

void		ShrubberyCreationForm::executeForm() const {

	std::string tmp = _target + "_shrubbery";
	std::ofstream ofs(tmp.c_str());
	ofs << "	           ,@@@@@@@,\n";
	ofs << "       ,,,.   ,@@@@@@/@@,  .oo8888o.\n";
	ofs << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n";
	ofs << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n";
	ofs << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n";
	ofs << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n";
	ofs << "   `&%\\ ` /%&'    |.|        \\ '|8'\n";
	ofs << "       |o|        | |         | |\n";
	ofs << "       |.|        | |         | |\n";
	ofs << "jgs \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_ for " + _target + "\n";
	ofs.close();
}
