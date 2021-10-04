#include "Cat.hpp"
#include "Dog.hpp"

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

	// try instanciate AAnimal Object
	// Animal toto;
}