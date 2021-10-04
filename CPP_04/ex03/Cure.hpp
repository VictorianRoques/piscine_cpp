#ifndef CURE_H
# define CURE_H

#include "ICharacter.hpp"

class Cure : public AMateria {

public:

	Cure();
	Cure(Cure const & src);
	virtual ~Cure();

	Cure & 	operator=(Cure const & src);
	Cure * 	clone () const;
	void	use(ICharacter & target);
};

#endif
