#include "mutantstack.hpp"
#include <iostream>
#include <list>

int		main()
{

	std::cout << "Mutant stack" << std::endl;

	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout <<  "Top:" << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Size: " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << "Content: " << std::endl;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::cout << "\n********************\n";
	std::cout << "Regular Stack: " << std::endl;;
	std::stack<int> s(mstack);
	while (s.size())
	{
		std::cout << s.top() << std::endl;
		s.pop();
	}

	std::cout << "Copy constructor mstack" << std::endl;
	MutantStack<int> toto(mstack);
	MutantStack<int>::reverse_iterator rit = mstack.rbegin();
	MutantStack<int>::reverse_iterator rite = mstack.rend();
	std::cout << "Content: " << std::endl;
	while (rit != rite)
	{
	std::cout << *rit << std::endl;
	++rit;
	}

	std::cout << std::endl;
	std::cout << "Test of member function:" << std::endl;
	std::cout << "Toto empty: " << toto.empty() << std::endl;
	std::cout << "Toto size: " << toto.size() << std::endl;
	std::cout << "Toto push 12" << std::endl;
	toto.push(12);
	std::cout << "Toto top: " << toto.top() << std::endl;
 	std::cout << "\n********************\n" << std::endl;


	std::cout << "List stack:" << std::endl;
	std::list<int> mlist;
	mlist.push_back(5);
	mlist.push_back(17);
	std::cout <<  "Top:" << mlist.back() << std::endl;
	mlist.pop_back();
	std::cout << "Size: " << mlist.size() << std::endl;
	mlist.push_back(3);
	mlist.push_back(5);
	mlist.push_back(737);
	mlist.push_back(0);

	std::list<int>::iterator lit = mlist.begin();
	std::list<int>::iterator lite = mlist.end();
	++lit;
	--lit;
	std::cout << "Content: " << std::endl;
	while (lit != lite)
	{
	std::cout << *lit << std::endl;
	++lit;
	}

	return (0);
}