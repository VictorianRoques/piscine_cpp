#ifndef WEAPON_H
# define WEAPON_H

# include <string>

class Weapon {

private:
	
	std::string type;

public:

	Weapon(std::string type);
	Weapon( void ) {};
	
	std::string getType( void ) const;
	void		setType( std::string type);
};

#endif
