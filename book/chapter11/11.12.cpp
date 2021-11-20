#include <utility>
#include <iostream>
#include <vector>
#include <string>
#include <fstream>

int main()
{
	std::ifstream ifs("11.12.in");
	std::vector<std::pair<std::string, int> > v;
	std::pair<std::string, int> p;
	while (ifs)
	{
		ifs >> p.first;
		ifs >> p.second;
		v.push_back(p);
	}
	ifs.clear();
	ifs.close();
	for (std::vector<std::pair<std::string, int> >::const_iterator i = v.cbegin(); i != v.cend(); ++i)
		std::cout << i->first << ": " << i->second << std::endl;
}