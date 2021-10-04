#include <iostream>
#include <fstream>

int		handle_input(int ac, char **argv)
{
	if (ac != 4)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (-1);
	}
	for (int i = 0; i < 4; i++)
	{
		if (!std::char_traits<char>::length(argv[i]))
		{
			std::cout << "Empty arguments" << std::endl;
			return (-1);
		}
	}
	return (0);
}

int		main(int ac, char **argv)
{
	if (handle_input(ac, argv))
		return (-1);

	for (size_t i = 0; i < std::char_traits<char>::length(argv[1]); i++)
		argv[1][i] = toupper(argv[1][i]);
	
	std::string nameInputFile(argv[1]);
	std::string replace = ".replace";
	std::string nameReplaceFile = nameInputFile + replace;

	std::ifstream inputFile(argv[1]);

	if (!inputFile.is_open())
	{
		std::cout << "Error: failed to open file" << std::endl;
		return (-1);
	}

	std::ofstream outputFile(nameReplaceFile.data());
	
	if (!outputFile.is_open())
	{
		std::cout << "Error: file could not be opened" << std::endl;
		return (-1);
	}

	std::string str;
	std::string s1 (argv[2]);
	std::string s2 (argv[3]);

	std::size_t found;
	std::size_t begin;

	while (std::getline(inputFile, str))
	{
		if ((found = str.find(s1)) != std::string::npos)
		{
			begin = 0;
			while ((found = str.find(s1, begin)) != std::string::npos)
			{
				outputFile << str.substr(begin, found - begin) << s2;
				begin = found + s1.length();
			}
			if (begin < str.length())
				outputFile << str.substr(begin, str.length());
			outputFile << std::endl;
		}
		else
			outputFile << str << std::endl;
	}
	outputFile.close();
	inputFile.close();
}
