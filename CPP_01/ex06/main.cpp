#include "Karen.hpp"

int		main(int ac, char **argv)
{
	if (ac != 2)
	{
		std::cout << "Error: wrong number of arguments" << std::endl;
		return (-1);
	}
	Karen toto;

	std::string input(argv[1]);
	toto.complain(input);
	return (0);
}
