#include "Cure.hpp"
#include "Ice.hpp"
#include "AMateria.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

void		doSpace(std::string name)
{
	std::cout << std::endl;
	std::cout << "----------------------------------" << std::endl;
	std::cout <<"************* " << name << " *************" << std::endl;
	std::cout << "----------------------------------" << std::endl;
	std::cout << std::endl;	
}

int		main()
{
	doSpace("Init");
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;

	doSpace("Create Materia");
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	//try full inventor
	me->equip(src->createMateria("ice"));

	//Use
	doSpace("USE");
	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);
	std::cout << "********** Copy bob = me *************" << std::endl;
	(Character&)*bob = (Character&)*me;

	std::cout << "************ Unequip me *************" << std::endl;
	me->unequip(3);

	std::cout << "************ Bob use the unequip me *******" << std::endl;
	bob->use(3, *me);

	doSpace("Destructor");
	delete bob;
	delete me;
	delete src;
	return 0;
}
