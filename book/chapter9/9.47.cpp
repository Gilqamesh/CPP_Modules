#include <string>
#include <iostream>

std::ostream	&
fn(std::ostream &os, const std::string &s)
{
	const std::string numbers{"1234567890"};
  	const std::string alphabets{"abcdefghijklmnopqrstuvwxyz"
                              "ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	std::string::size_type i = 0;
	if ((i = s.find_first_of(numbers, i)) != std::string::npos)
	{
		os << "Found numeric character(s), index(es) in" << ": " << i << "; ";
		++i;
	}
	while ((i = s.find_first_of(numbers, i)) != std::string::npos)
	{
		os << i << "; ";
		++i;
	}
	i = 0;
	if ((i = s.find_first_of(alphabets, i)) != std::string::npos)
	{
		os << "Found alphabetical character(s), index(es) in" << ": " << i << "; ";
		++i;
	}
	while ((i = s.find_first_of(alphabets, i)) != std::string::npos)
	{
		os << i << "; ";
		++i;
	}
	return (os);
}

int main()
{
	std::string s("ab2c3d7R4E6");
	fn(std::cout, s);
}