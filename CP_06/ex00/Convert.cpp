# include "Convert.hpp"

Convert::Convert(char * input): _input(input) {

}

Convert::Convert(const Convert & src) {

	*this = src;
}

Convert &	Convert::operator=(const Convert & rhs) {

	if (this != &rhs)
	{
		_input = rhs._input;
	}
	return *this;
}

void		Convert::scalaireConvert() {

	convertChar();
	convertInt();
	convertFloat();
	convertDouble();
}

void		Convert::convertChar()
{
	float value = strtof(_input, NULL);
	std::cout << "char: ";
	if(strchr(_input, 'n') || !isprint(static_cast<char>(value)))
	{
		std::cout << "Non displayable" << std::endl;
		return ;
	}
	std::cout << static_cast<char>(value) << std::endl;
}

void		Convert::convertInt()
{
	double value = strtod(_input, NULL);
	std::cout << "int: ";
	if ((value == 0.0f && _input[0] != '0' && _input[0] != '-') || strchr(_input, 'n'))
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	if (errno == ERANGE || value > 2147483647 || value < -2147483648)
	{
		std::cout << "out of range" << std::endl;
		return ;
	}
	std::cout << static_cast<int>(value) << std::endl;
}

void		Convert::convertFloat()
{
	float value = strtof(_input, NULL);
	std::cout << "float: ";
	if (value == 0.0f && _input[0] != '0' && _input[0] != '-')
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	if (errno == ERANGE)
	{
		std::cout << "out of range" << std::endl;
		return ;
	}
	std::cout << value;
	if (value == floor(value) && !strchr(_input, 'n'))
		std::cout << ".0";
	std::cout << "f" << std::endl;
}

void		Convert::convertDouble() {

	double value = strtod(_input, NULL);
	std::cout << "double: ";
	if ((isinf(value) && !strchr(_input, 'n')) || (value == 0.0 && _input[0] != '0' && _input[0] != '-'))
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	std::cout << value;
	if (value == floor(value) && !strchr(_input, 'n') && isfinite(value))
		std::cout << ".0";
	std::cout << std::endl;
}