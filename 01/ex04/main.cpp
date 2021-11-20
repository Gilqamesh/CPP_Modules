#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Usage: ./replace <filename> <needle> <replacement>" << std::endl;
		exit(EXIT_FAILURE);
	}
	std::string s1(argv[2]), s2(argv[3]);
	if (s1.size() == 0 || s2.size() == 0)
	{
		std::cout << "Second and third argument have to be non-empty strings." << std::endl;
		exit(EXIT_FAILURE);
	}
	std::ifstream is(argv[1]);
	if (!is)
	{
		std::cout << "Could not open the file: " << argv[1] << std::endl;
		exit(EXIT_FAILURE);
	}
	std::ofstream os(std::string(argv[1]) + ".replace");
	if (!os)
	{
		std::cout << "Could not create the file: " << std::string(argv[1]) + ".replace" << std::endl;
		exit(EXIT_FAILURE);
	}
	std::string	str;
	while (std::getline(is, str))
	{
		std::string::size_type cur = 0, prev = 0;
		while (1)
		{
			cur = str.find(s1, prev);
			if (cur != std::string::npos)
			{
				os << str.substr(prev, cur - prev) << s2;
				prev = cur + s1.size();
			}
			else
			{
				os << str.substr(prev);
				break ;
			}
		}
		os << std::endl;
	}
	is.close();
	os.close();
}
