#include <iostream>

int	main(void)
{
	std::string	s("HI THIS IS BRAIN");
	std::string	*stringPTR = &s;
	std::string	&stringREF = s;

	std::cout << "Address in memory &s: " << &s << std::endl;
	std::cout << "Using stringPTR: " << stringPTR << std::endl;
	std::cout << "Using stringREF: " << &stringREF << std::endl;
	std::cout << "Value of string using stringPTR: " << *stringPTR << std::endl;
	std::cout << "Using stringREF: " << stringREF << std::endl;
	
}
