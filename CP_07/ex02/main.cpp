#include "Array.hpp"
#define MAX_VAL 750

#include <stdlib.h>
#include <time.h>

int		main()
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
	
    /*
    Test copy construcor and operator =
    */
    Array<int> tmp = numbers;
    Array<int> test(tmp);

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i] || test[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

	Array<int>deep(10);
	for (int i = 0; i < 10; i++)
	{
		deep[i] = rand();
	}

	// DEEP COPY
	Array<int>copy(deep);
	std::cout << "Orignal: " << std::endl;
	deep.display();
	std::cout << "Copy: " << std::endl;
	copy.display();
	for (int i = 0; i < 10; i++)
	{
		copy[i] = rand();
	}
	std::cout << "Modiy copy: " << std::endl;
	copy.display();
	std::cout << "Original" << std::endl;
	deep.display();
	
    delete [] mirror;
    return 0;
}