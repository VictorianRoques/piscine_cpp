#ifndef CHARACTER_H
# define CHARACTER_H

# include "ICharacter.hpp"

class Character : public ICharacter {

private:

	std::string _name;
	AMateria * 	_inventory[4];
	int			max_i;

public:

	Character();
	Character(std::string const & name);
	Character(Character const & src);
	~Character();

	Character & 		operator=(Character const & src);
	std::string const & getName() const;
	void				equip(AMateria* m);
	void				unequip(int idx);
	void				use(int idx, ICharacter& target);

};

#endif
