#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>

class Animal {

protected:

	std::string const _type;

public:

	Animal();
	Animal(std::string name);
	Animal(const Animal & src);
	virtual ~Animal();

	Animal & 		operator = (const Animal & src);
	std::string		getType() const;
	virtual void	makeSound() const;

};

#endif