#ifndef CAT_H
# define CAT_H

# include "Animal.hpp"

class Cat: public Animal {

public:

	Cat();
	Cat(const Cat & src);
	virtual ~Cat();

	Cat & 			operator = (const Cat & src);
	void			makeSound() const;
	
};

#endif