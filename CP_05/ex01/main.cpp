#include "Bureaucrat.hpp"
#include "Form.hpp"

int		main()
{
	try {
		Bureaucrat Belzebut("Belzebuth", 20);
		Form Form1("Form1", 21, 50);

		std::cout << Belzebut << std::endl;
		std::cout << Form1 << std::endl;
		Belzebut.signForm(Form1);
		Belzebut.signForm(Form1);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what();
	}
	
	try {
		Bureaucrat Lucifer("Lucifer", 10);
		Form form2("Form2", 5, 10);

		std::cout << Lucifer << std::endl;
		std::cout << form2 << std::endl;

		Lucifer.signForm(form2);
	}
	catch (std::exception & e) {
		std::cerr << e.what();
	}
}