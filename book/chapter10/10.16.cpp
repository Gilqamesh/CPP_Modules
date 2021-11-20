#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

void	elimDups(std::vector<std::string> &s)
{
	std::sort(s.begin(), s.end());
	std::vector<std::string>::iterator i = std::unique(s.begin(), s.end());
	s.erase(i, s.end());
}

std::string
make_plural(int n, const std::string &s, const std::string &suffix)
{
	if (n > 1)
		return s + suffix;
	return s;
}

void	biggies(std::vector<std::string> &words, std::vector<std::string>::size_type sz)
{
	elimDups(words);
	std::stable_sort(words.begin(), words.end(), [](const std::string &a, const std::string &b){ return a.size() < b.size(); });
	auto wc = std::find_if(words.begin(), words.end(), [sz](const std::string &a){ return a.size() >= sz; });
	std::vector<std::string>::size_type count = words.end() - wc;
	std::cout << count << " " << make_plural(count, "word", "s") << " of length " << sz << " or longer" << std::endl;
	std::for_each(wc, words.end(), [](const std::string &s){ std::cout << s << " "; });
	std::cout << std::endl;
}

int main()
{
	std::vector<std::string> v;
	std::string s;
	while (std::cin >> s)
		v.push_back(s);
	std::cin.clear();
	biggies(v, 3);
}