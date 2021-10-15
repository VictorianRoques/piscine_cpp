#ifndef CONVERT_H
# define CONVERT_H

#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <limits>
#include <string.h>
#include <cerrno>

class Convert {

	private:

	char* _input;

	public:

	Convert() {};
	Convert(char* input);
	virtual ~Convert() {};
	Convert(const Convert & src);
	Convert & 	operator=(const Convert & rhs);
	void		scalaireConvert();
	void		convertChar();
	void		convertInt();
	void		convertFloat();
	void		convertDouble();

};

#endif