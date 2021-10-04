#ifndef DOG_H
# define DOG_H

# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal {

private:

	Brain * DogBrain;

public:

	Dog();
	Dog(const Dog & src);
	virtual ~Dog();

	Dog &	operator = (const Dog & src);
	void	makeSound() const;
	Brain *	getBrain() const;
	
};

#endif