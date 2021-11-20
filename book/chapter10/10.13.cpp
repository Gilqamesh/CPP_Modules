#include <algorithm>
#include <vector>
#include <iostream>

bool
g5(const std::string &s)
{
	return (s.size() >= 5);
}

int main()
{
	std::vector<std::string> words;
	std::string word;
	while (std::cin >> word)
		words.push_back(word);
	std::cin.clear();
	std::partition(words.begin(), words.end(), g5);
	for (std::vector<std::string>::const_iterator i = words.cbegin(); i != words.cend(); ++i)
		std::cout << *i << ' ';
	std::cout << std::endl;
}