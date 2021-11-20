#include <iostream>
#include <sstream>
#include <string>

int	main(void)
{
	std::string str ("123");
	int num;
	std::stringstream(str) >> num;
	std::cout << num << std::endl;
}
