#include "Karen.hpp"
#include <iostream>

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Usage: ./karenFilter <max_level>" << std::endl;
		exit(EXIT_FAILURE);
	}
	Karen k;
	k.complain(argv[1]);
	exit(EXIT_SUCCESS);
}
