#ifndef IDK
# define IDK

# include <iostream>
# include <vector>
# include <map>
# include <set>
# include <sstream>
# include <fstream>
# include <memory>

class QueryResult
{
	void print(std::ostream &, const std::string &);
	public:
		QueryResult(): wordc(), data() {};
	private:
		std::shared_ptr<wordCount> wordc;
		std::shared_ptr<WordMap> data;
};

class TextQuery
{
	typedef std::map<std::string, std::set<int> > WordMap;
	typedef std::map<std::string, size_t> wordCount;
	friend class QueryResult;
	public:
		TextQuery(std::ifstream &);
	private:
		std::vector<std::string> text;
		std::shared_ptr<wordCount> wordc;
		std::shared_ptr<WordMap> data;
};

void print(std::ostream &, const std::string &);

#endif
