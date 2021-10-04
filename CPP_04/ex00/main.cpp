#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#include <iomanip>

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

	doSpace("ANIMAL");
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete i;
	delete j;

	doSpace("WRONG");

	const WrongAnimal* toto = new WrongAnimal("Tiger");
	const WrongAnimal* b = new WrongCat();
	std::cout << b->getType() << " " << std::endl;
	b->makeSound();
	toto->makeSound();

	delete toto;
	delete b;
}