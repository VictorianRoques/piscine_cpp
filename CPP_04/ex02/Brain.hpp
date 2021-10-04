#ifndef BRAIN_H
# define BRAIN_H

#include <iostream>

class Brain {

private:

	std::string ideas[100]; 
	
public:

	Brain();
	Brain(const Brain & src);
	~Brain();

	Brain &			operator= (const Brain & src);
	std::string *	getIdeas ();
	void			setBrain(std::string idea, int index);
};

#endif