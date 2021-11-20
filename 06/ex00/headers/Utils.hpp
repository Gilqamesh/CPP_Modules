#ifndef UTILS_HPP
# define UTILS_HPP

# include <string>
# include <stdexcept>

class Utils
{
	public:
		static void display_literal(const std::string &);
		static void	display_char(char);
		static void display_int(int);
		static void display_float(float);
		static void display_double(double);
	private:
		Utils();
		class CharOverflow: public std::overflow_error
		{
			public:
				CharOverflow();
				~CharOverflow() throw();
				CharOverflow(const CharOverflow &);
		};
		class IntOverflow: public std::overflow_error
		{
			public:
				IntOverflow();
				~IntOverflow() throw();
				IntOverflow(const IntOverflow &);
		};
};

#endif
