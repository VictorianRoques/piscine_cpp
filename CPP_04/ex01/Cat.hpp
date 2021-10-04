#ifndef CAT_H
# define CAT_H

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal {

private:

	Brain * CatBrain;

public:

	Cat();
	Cat(const Cat & src);
	virtual ~Cat();

	Cat & 	operator = (const Cat & src);
	void	makeSound() const;
	Brain *	getBrain() const;
};

#endif