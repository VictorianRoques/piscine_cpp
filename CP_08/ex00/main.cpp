#include "easyfind.hpp"
#include <iostream>
#include <ctime>
#include <vector>
#include <list>

int generateNumber(void)
{
    int generate = std::rand() % 20000;
	return generate;
}

std::vector<int>    createRandomVector(unsigned int nb)
{
    std::vector<int>    tab(nb);

    std::generate(tab.begin(), tab.end(), generateNumber);
    return tab;
}

std::list<int>	createRandomList()
{
	std::list<int> lst;

	for (int i = 0; i < 10000; i++)
	{
		lst.push_back(generateNumber());
	}
	return lst;
}

int		main()
{
	std::srand(std::time(NULL));
	std::cout << "TEST WITH TAB" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::vector<int> tab(createRandomVector(10000));
		std::vector<int>::iterator it;
		it = find(tab.begin(), tab.end(), generateNumber());
		if (it != tab.end())
    		std::cout << "Element found in vector: " << *it << '\n';
		else
			std::cout << "Element not found in vector\n";
	}

	std::cout << "TEST WITH LIST" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::list<int> lst = createRandomList();
		std::list<int>::iterator it;
		it = find(lst.begin(), lst.end(), generateNumber());
		if (it != lst.end())
			std::cout << "Element found in lst: " << *it << '\n';
		else
			std::cout << "Element not found in lst\n";	
	}
}