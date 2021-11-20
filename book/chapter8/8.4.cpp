#include <fstream>
#include <iostream>
#include <vector>
#include <iterator>

std::ifstream	&read(std::ifstream &ifs, const std::string &path, std::vector<std::string> &v)
{
	ifs.clear();
	ifs.open(path);
	if (!ifs)
		std::cerr << "Fail to open file: " << path << std::endl;
	while (ifs)
	{
		std::string line;
		std::getline(ifs, line);
		if (ifs)
			v.push_back(line);
	}
	ifs.clear();
	return (ifs);
}

void	print(const std::vector<std::string> &v)
{
	if (!v.size())
		return ;
	for (std::vector<std::string>::const_iterator i = v.begin(); i != v.end(); ++i)
	{
		std::cout << *i;
		if (i + 1 != v.end())
			std::cout << ", ";
	}
	std::cout << std::endl;
}

int main()
{
	std::vector<std::string> v;
	std::ifstream ifs;
	read(ifs, "test.txt", v);
	print(v);
}
