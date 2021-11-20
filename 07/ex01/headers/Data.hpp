#ifndef DATA_HPP
# define DATA_HPP

// ************************************************************************** //
//                                  Data Class                                //
// ************************************************************************** //

# include <string>
# include <iostream>

class Data
{
	public:
		Data();
		~Data();
		Data(const Data &);
		Data &operator=(const Data &);
		void add(const std::string &);
		size_t getSize(void) const;
		std::string	*getSet(void);
	private:
		static const size_t	setSize = 10;
		std::string			set[setSize];
		size_t				curSize;
};

std::ostream	&operator<<(std::ostream &, const Data &);

#endif /* DATA_HPP */
