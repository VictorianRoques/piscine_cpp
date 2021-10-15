#ifndef SPAN_H
# define SPAN_H

#include <vector>
#include <algorithm>

class Span {

private:

	unsigned int		_N;
	std::vector<int>	_arr;

public:

	class arrayIsFull : public std::exception {
		virtual const char* what() const throw (){
			return "array is full";
		}
	};

	class emptyArr : public std::exception {
		virtual const char* what() const throw (){
			return "array is empty or contain only 1 element";
		}
	};


	Span();
	Span(unsigned int n);
	Span(Span const & src);
	~Span() {};

	Span & 		operator=(Span const & rhs);
	void		addNumber(int n);
	void		addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end);
	long		shortestSpan();
	long		longestSpan();
	void		display();
	
};

#endif