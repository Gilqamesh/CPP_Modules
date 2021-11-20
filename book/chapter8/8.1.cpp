#include <iostream>

std::istream	&read(std::istream &is)
{
	is.clear();
	std::string s;
	while (is >> s)
		std::cout << s;
	is.clear();
	return (is);
}

int main()
{
	read(std::cin);
}