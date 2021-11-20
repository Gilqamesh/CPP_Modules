#include <string>
#include <forward_list>
#include <iostream>

std::forward_list<std::string>::iterator
fn(std::forward_list<std::string> &fl, const std::string &needle, const std::string &insert)
{
	std::forward_list<std::string>::const_iterator prev = fl.before_begin();
	std::forward_list<std::string>::const_iterator cur = fl.begin();
	while (cur != fl.end())
	{
		if (*cur == needle)
			return (fl.insert_after(cur, insert));
		prev = cur;
		++cur;
	}
	return (fl.insert_after(prev, insert));
}

std::ostream &print(std::ostream &os, const std::forward_list<std::string> &fl)
{
	if (fl.empty())
		return (os);
	for (std::forward_list<std::string>::const_iterator i = fl.begin(); i != fl.end();)
	{
		os << *i;
		if (++i != fl.end())
			os << ", ";
	}
	return (os << std::endl);
}

int main()
{
	std::forward_list<std::string> fl{"hello", "from", "the", "forward", "list"};
	print(std::cout, fl);
	fn(fl, "hello", "insert1");
	print(std::cout, fl);
	fn(fl, "list", "insert2");
	print(std::cout, fl);
	fn(fl, "dasdsad", "last");
	print(std::cout, fl);
}