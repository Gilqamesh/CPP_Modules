#ifndef STRBLOB_HPP
# define STRBLOB_HPP

# include <iostream>
# include <vector>
# include <memory>

class StrBlob
{
	friend std::ostream	&operator<<(std::ostream &os, const StrBlob &s);
	public:
		typedef std::vector<std::string>::size_type size_type;
		StrBlob();
		StrBlob(std::initializer_list<std::string>);
		size_type size() const { return data->size(); }
		bool empty() const { return data->empty(); }
		// add and remove elements
		void push_back(const std::string &t) { data->push_back(t); }
		void pop_back();
		// element access
		std::string &front();
		const std::string &front() const;
		std::string &back();
		const std::string &back() const;
	private:
		std::shared_ptr<std::vector<std::string>> data;
		// throws msg if data[i] isn't valid
		void check(size_type i, const std::string &msg) const;
};

std::ostream	&operator<<(std::ostream &os, const StrBlob &s)
{
	for (std::vector<std::string>::const_iterator i = s.data->cbegin(); i != s.data->cend(); ++i)
	{
		os << *i;
		if (i + 1 != s.data->cend())
			os << " ";
	}
	return (os);
}

#endif
