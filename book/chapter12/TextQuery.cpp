#include "12.27.hpp"

TextQuery::TextQuery(std::ifstream &fs)
{
	std::string s;
	while (std::getline(fs, s))
		text.push_back(s);
	fs.clear();
	data = std::make_shared<WordMap>();
	wordc = std::make_shared<wordCount>();
	for (std::vector<std::string>::const_iterator i = text.cbegin(); i != text.cend(); ++i)
	{
		std::istringstream is(*i);
		while (is >> s)
		{
			data->insert(std::make_pair(s, i - text.cbegin() + 1));
			++(*wordc)[s];
		}
	}
}

void print(std::ostream &os, const std::string &s)
{
	os << s << " occurs " << (*wordc)[s] << " times\n";
}
