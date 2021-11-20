#include <map>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <unordered_map>

const std::string &
transform(const std::map<std::string, std::string> &map, const std::string &word)
{
	std::map<std::string, std::string>::const_iterator i = map.find(word);
	if (i != map.cend())
		return i->second;
	else
		return word;
}

int main()
{
	std::map<std::string, std::string> transform_map;
	std::ifstream ifs("11.33.in");
	std::string word;
	std::string line;
	while (ifs >> word && std::getline(ifs, line))
		transform_map[word] = line.substr(1);
	std::ifstream ifs2("11.33.in2");
	while (std::getline(ifs2, line))
	{
		std::istringstream is(line);
		bool first = true;
		while (is >> word)
		{
			if (first)
				first = false;
			else
				std::cout << " ";
			std::cout << transform(transform_map, word);
		}
		std::cout << std::endl;
	}
}
