#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

int		main()
{
	try {

		Bureaucrat Belzebuth("Belzebuth", 132);
		Bureaucrat MiddleOne("MiddleOne", 69);
		Bureaucrat TheDevil("TheDevil" , 1);

		Form *Shrubery = new ShrubberyCreationForm("Belzebuth");
		Form *Roboto = new RobotomyRequestForm("TheDevil");
		Form *Presiden = new PresidentialPardonForm("Belzebuth");

		Belzebuth.signForm(*Shrubery);
		Belzebuth.executeForm(*Shrubery);

		// Error Grade too low
		Belzebuth.signForm(*Roboto);

		MiddleOne.signForm(*Roboto);
		Belzebuth.executeForm(*Roboto);

		// try to execute unsigned form
		TheDevil.executeForm(*Presiden);

		TheDevil.signForm(*Presiden);
		
		// grade to low for execute
		MiddleOne.executeForm(*Presiden);
		TheDevil.executeForm(*Presiden);

		delete Shrubery;
		delete Roboto;
		delete Presiden;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
}