#include <string>
#include <iostream>

std::string
fn(const std::string &name, const std::string &prefix, const std::string &suffix)
{
	std::string s(name);
	s.insert(0, prefix + ' ');
	s.append(' ' + suffix);
	return (s);
}

std::string
fn2(const std::string &name, const std::string &prefix, const std::string &suffix)
{
	std::string s;
	if (!prefix.empty())
		s.insert(s.size(), prefix + ' ');
	s.insert(s.size(), name);
	if (!suffix.empty())
		s.insert(s.size(), ' ' + suffix);
	return (s);
}

int main()
{
	std::cout << fn("Bla", "Mr.", "III") << std::endl;
	std::cout << fn2("Bla", "Mr.", "III") << std::endl;
}