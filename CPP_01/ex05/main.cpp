#include "Karen.hpp"

int		main()
{
	Karen toto;

	toto.complain("DEBUG");
	toto.complain("INFO");
	toto.complain("WARNING");
	toto.complain("ERROR");
	toto.complain("Invalid inputs");
	toto.complain("");
	
	Karen Mireille;

	Mireille.complain("ERROR");
	Mireille.complain("INFO");
	Mireille.complain("WARNING");
	Mireille.complain("DEBUG");
	Mireille.complain("BLABLA");

}
