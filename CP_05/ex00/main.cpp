#include "Bureaucrat.hpp"

int		main()
{
	try {
		Bureaucrat Belzebuth("Belzebuth", 160);
		std::cout << Belzebuth;
		Belzebuth.downGrade();
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try {
		Bureaucrat Benza("Benza", 0);
		std::cout << Benza;
		Benza.downGrade();
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try {
		Bureaucrat Zazoue("Zazoue", 1);
		std::cout << Zazoue;
		Zazoue.downGrade();
		std::cout << Zazoue;
		Zazoue.upGrade();
		std::cout << Zazoue;
		Zazoue.upGrade();
		std::cout << Zazoue;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}