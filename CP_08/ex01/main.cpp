#include "span.hpp"
#include <iostream>
#include <ctime>

# define MAX 500000
# define RANGE_GENERATE 5000000

int generateNumber(void)
{
    int generate = std::rand();
	if (generate % 2)
		return generate * -1;
	return generate;
}

std::vector<int>    createRandomVector(unsigned int nb)
{
    std::vector<int>    tab(nb);

    std::generate(tab.begin(), tab.end(), generateNumber);
    return tab;
}


int main()
{
	std::srand(std::time(NULL));
	try {
		std::cout << "Subject test:" <<std::endl;
		Span sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		sp.addNumber(12);
	}
	catch (std::exception & e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	std::cout << "Massive test" << std::endl;
	try {
		std::vector<int>   tab(createRandomVector(MAX));
		Span	            sp(MAX);
		sp.addNumber(tab.begin(), tab.end());
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

}