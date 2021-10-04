#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"

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
	doSpace("CONSTRUCTOR");
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const Animal **animaux = new const Animal*[4];

	for (int k = 0; k < 4; k++)
	{
		if (k < 2)
		{
			animaux[k] = new Dog();
		}
		else
			animaux[k] = new Cat();
	}
	animaux[0]->makeSound();
	animaux[3]->makeSound();
	doSpace("DESTRUCTOR");
	for (int i = 0; i < 4; i++)
		delete animaux[i];
	delete [] animaux;
	delete j;
	delete i;

	doSpace("DEEP COPY");
	Dog      Alfred;
	Alfred.getBrain()->setBrain("I want to eat", 0);
	std::cout << "Alfred ideas[0]: " << Alfred.getBrain()->getIdeas()[0] << std::endl;
	Dog	AlfredCopy;
	AlfredCopy = Alfred;
	
	std::cout << std::endl;
	std::cout << "AlfredCopy ideas[0]: " << AlfredCopy.getBrain()->getIdeas()[0] << std::endl;
	std::cout << "Set Alfred ideas[0] to 'I want to sleep'" << std::endl;
	Alfred.getBrain()->setBrain("I want to sleep", 0);
	std::cout << "Alfred ideas[0]: " << Alfred.getBrain()->getIdeas()[0] << std::endl;
	std::cout << "AlfredCopy ideas[0]: " << AlfredCopy.getBrain()->getIdeas()[0] << std::endl;

	// doSpace("WRONG DEEP COPY");

	// WrongDog      WAlfred;

	// WAlfred.getBrain()->setBrain("I want to eat", 0);
	// std::cout << "WAlfred ideas[0]: "<<  WAlfred.getBrain()->getIdeas()[0] << std::endl;
	// WrongDog	WAlfredCopy;
	// WAlfredCopy = WAlfred;

	// std::cout << std::endl;
	// std::cout << "WAlfredCopy ideas[0]: " << WAlfredCopy.getBrain()->getIdeas()[0] << std::endl;
	// std::cout << "Set WAlfred ideas[0] to 'I want to sleep'" << std::endl;
	// WAlfred.getBrain()->setBrain("I want to sleep", 0);
	// std::cout << "WAlfred ideas[0]: " << WAlfred.getBrain()->getIdeas()[0] << std::endl;
	// std::cout << "WAlfredCopy ideas[0]: " << WAlfredCopy.getBrain()->getIdeas()[0] << std::endl;
}