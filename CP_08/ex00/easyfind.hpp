#ifndef EASYFIND_H
# define EASYFIND_H

# include <algorithm>

template< typename T>
typename T::iterator easyfind(T container, int const & to_find)
{
	return std::find(container.begin(), container.end(), to_find);
}

#endif