#ifndef WHATEVER_H
# define WHATEVER_H

template< typename T>
void	swap(T & x, T & y) {

	T swap = x;
	x = y;
	y = swap;
}

template< typename T>
T const & min(T const & x, T const & y) {
	if (y <= x)
		return y;
	return x;
}

template< typename T>
T const & max (T const & x, T const & y) {
	if (y >= x)
		return y;
	return x;
}


#endif