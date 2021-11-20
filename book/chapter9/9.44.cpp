#include <string>
#include <iostream>

std::string &
fn(std::string &s, const std::string &oldVal, const std::string &newVal)
{
	const std::string::size_type oldValSize = oldVal.size();
	for (std::string::size_type i = 0; i < s.size();)
	{
		std::string tmps = s.substr(i, oldValSize);
		if (tmps == oldVal)
		{
			s.replace(i, oldValSize, newVal);
			i += oldValSize;
		}
		else
			++i;
	}
	return (s);
}

int main()
{
	std::string s("tho this function should replace every occurances of tho, we will have to see if"
	" that's the case thotho");
	std::cout << fn(s, "tho", "though") << std::endl;
}