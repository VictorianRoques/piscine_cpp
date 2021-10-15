#ifndef ARRAY_H
# define ARRAY_H

#include <exception>
#include <iostream>

template< typename T>
class Array {

private:

	T * 				_ptr;
	const unsigned int 	_size;
	
public:

	class OutOfTabRange : public std::exception {
		virtual const char* what() const throw () {
			return "this index is out of tab Range";
		}
	};

	Array(): _ptr(NULL), _size(0) {};
	Array(unsigned int n): _size(n) { _ptr = new T[n]; };
	Array(Array const & src): _size(src._size)
	{
		_ptr = new T[_size];
		for (unsigned int i = 0; i < _size; i++)
			_ptr[i] = src._ptr[i];
	};

	~Array() { delete [] _ptr; }
	Array & operator=(Array const & rhs)
	{
		if (this != &rhs)
		{
			_size = rhs._size;
			delete [] _ptr;
			_ptr = new T[_size];
			for (unsigned int i = 0; i < _size; i++)
				_ptr[i] = rhs._ptr[i];
		}
		return *this;
	};

	T &	operator[](unsigned int index)
	{
		if (index >= _size)
			throw Array::OutOfTabRange();
		return (*(_ptr + index));
	};

	unsigned int	size() const { return _size; };
	
	void			display()
	{
		for (unsigned int i = 0; i < _size; i++)
		{
			std::cout << _ptr[i];
			if (i < _size - 1)
				std::cout <<  ", ";
		}
		std::cout << std::endl;
	}
};

#endif