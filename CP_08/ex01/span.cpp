#include "span.hpp"
#include <iostream>
Span::Span(): _N(0) {}

Span::Span(unsigned int n): _N(n) {}

Span::Span(Span const & src): _N(src._N), _arr(src._arr) {}

Span &		Span::operator=(Span const & rhs)
{
	if (this != &rhs)
	{
		_N = rhs._N;
		_arr = rhs._arr;
	}
	return *this;
}

void		Span::addNumber(int n)
{
	if (_arr.size() >= _N)
		throw Span::arrayIsFull();
	_arr.push_back(n);
}

void	Span::addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
	if (end - start > _N)
		throw Span::arrayIsFull();
	_arr.insert(_arr.begin(), start, end);
	_N = _arr.size();
}

long	Span::shortestSpan() {

	if (_arr.size() <= 1)
		throw Span::emptyArr();
	std::sort(_arr.begin(), _arr.end());

	long min = static_cast<long>(_arr[1]) - static_cast<long>(_arr[0]);
	for (unsigned int i = 0; i < _N - 1; i++)
	{
		if (_arr[i] == _arr[i + 1])
			return (0);
		long tmp = static_cast<long> (_arr[i + 1] - static_cast<long>(_arr[i]));
		if (tmp < min)
			min = tmp;
	}
	return min;
}

long	Span::longestSpan() {

	if (_arr.size() <= 1)
		throw Span::emptyArr();
	return (static_cast<long>(*std::max_element(_arr.begin(), _arr.end())) - static_cast <long>(*std::min_element(_arr.begin(), _arr.end())));
}