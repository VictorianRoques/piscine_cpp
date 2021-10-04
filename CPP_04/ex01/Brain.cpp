#include "Brain.hpp"

Brain::Brain() {
	
	std::cout << "Default Brain construcor called" << std::endl;
}

Brain::Brain(const Brain & src) {
	
	std::cout << "Copy Brain constructor called" << std::endl;
	*this = src;
}

Brain::~Brain() {

	std::cout << "Destructor Brain called" << std::endl;
}

Brain &		Brain::operator= (const Brain & src) {
	 
	if (this != &src)
	{
		for (int i = 0; i < 100; i++)
			ideas[i] = src.ideas[i];
	}
	return *this;
}

std::string *	Brain::getIdeas() { 
	
	return ideas;
}

void		Brain::setBrain(std::string idea, int index) {
	
	if (index >= 0 && index < 100)
		ideas[index] = idea;
}
