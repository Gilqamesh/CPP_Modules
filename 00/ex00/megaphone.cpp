#include <iostream>

static void mytoupper(char &c)
{
	if (c >= 'a' && c <= 'z')
		c &= ~32;
}

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}
	for (int j = 1; j < argc; j++)
	{
		for (int i = 0; argv[j][i]; i++)
			mytoupper(argv[j][i]);
		std::cout << argv[j];
	}
	std::cout << std::endl;
	return (0);
}