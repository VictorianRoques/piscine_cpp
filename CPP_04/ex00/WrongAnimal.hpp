#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

# include <iostream>

class WrongAnimal {

protected:

	std::string const _type;

public:

	WrongAnimal();
	WrongAnimal(std::string name);
	WrongAnimal(const WrongAnimal & src);
	virtual ~WrongAnimal();

	WrongAnimal & 		operator = (const WrongAnimal & src);
	std::string			getType() const;
	void				makeSound() const;

};

#endif