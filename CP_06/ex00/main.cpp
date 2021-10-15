#include "Convert.hpp"

int		main(int ac, char **argv)
{
	if (ac != 2)
	{
		std::cout << "Please enter only one arguement" << std::endl;
		return (-1);
	}
	Convert Scalaire(argv[1]);
	Scalaire.scalaireConvert();
	return (1);
}