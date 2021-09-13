#include "Karen.hpp"

void	Karen::debug( void ) {
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!";
	std::cout << std::endl;
	this->info();
}

void	Karen::info( void ) {
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!";
	std::cout << std::endl;
	this->warning();
}

void	Karen::warning( void ) {
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month.";
	std::cout << std::endl;
	this->error();
}

void	Karen::error( void ) {
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now.";
	std::cout << std::endl;
}

enum Karen::Level	Karen::resolveLevel(std::string level)
{
	if (level == "DEBUG") return LevelDebug;
	if (level == "INFO") return LevelInfo;
	if (level == "WARNING") return LevelWarning;
	if (level == "ERROR") return LevelError;
	return (LevelWrongInput);
}

void	Karen::complain(std::string level)
{
	void (Karen::*f)() = NULL;

	switch(resolveLevel(level))
	{
		case 0:
			f = &Karen::debug;
			break;
		case 1:
			f = &Karen::info;
			break;
		case 2:
			f = &Karen::warning;
			break;
		case 3:
			f = &Karen::error;
			break;
		case 4:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			return ;
	}
	(this->*f)();
}
