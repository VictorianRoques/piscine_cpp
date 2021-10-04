#ifndef WRONG_DOG_H
# define WRONG_DOG_H

# include "Animal.hpp"
# include "Brain.hpp"

class WrongDog: public Animal {

private:

	Brain * DogBrain;

public:

	WrongDog();
	WrongDog(const WrongDog & src);
	~WrongDog();

	WrongDog &	operator = (const WrongDog & src);
	void		makeSound() const;
	Brain *		getBrain() const;
	
};

#endif