#ifndef ITER_H
# define ITER_H

#include <iostream>

template< typename T>
void	iter(T arr[], std::size_t length, void(*f)(T const &elem))
{
	
	for (std::size_t i = 0; i < length; i++)
		(*f)(arr[i]);
}

template< typename T>
void	Display(T const & elem)
{
	std::cout << elem;
}

#endif