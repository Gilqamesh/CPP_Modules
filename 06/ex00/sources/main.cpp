#include "Utils.hpp"
#include <iostream>

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Usage: ./convert <literal>";
		exit(EXIT_FAILURE);
	}
	Utils::display_literal(argv[1]);
}
