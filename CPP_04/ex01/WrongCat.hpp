#ifndef WRONG_CAT_H
# define WRONG_CAT_H

# include "Animal.hpp"
# include "Brain.hpp"

class WrongCat: public Animal {

private:

	Brain * CatBrain;

public:

	WrongCat();
	WrongCat(const WrongCat & src);
	~WrongCat();

	WrongCat & operator = (const WrongCat & src);
	void		makeSound() const;
	Brain *		getBrain() const;
};

#endif