#include <fstream>
#include <iostream>
#include <string>

bool
extends(const std::string &s)
{
	static const std::string extenders("bdfghjklpqtyABCDEFGHIJKLMNOPQRSTUVWXYZ");
	return (s.find_first_of(extenders) != std::string::npos);
}

std::string
fn(std::ifstream &ifs)
{
	std::string word;
	std::string max;
	ifs.clear();
	ifs >> word;
	max = word;
	while (ifs >> word)
		if (extends(word) == false && word.size() > max.size())
			max = word;
	ifs.clear();
	return (max);
}

int main()
{
	std::ifstream is("test.txt");
	if (!is.is_open())
	{
		std::cerr << "Failed to open file\n";
		exit(EXIT_FAILURE);
	}
	std::cout << "Longest word in the file without an ascender or descender is: " << fn(is) << std::endl;
	is.close();
}