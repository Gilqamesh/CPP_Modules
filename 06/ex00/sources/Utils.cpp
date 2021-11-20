#include "Utils.hpp"
#include <iostream>
#include <cmath>
#include <stdexcept>
#include <climits>

void	Utils::display_literal(const std::string &s)
{
	double	d;
	try
	{
		if (s == "nan")
			throw std::domain_error("nan");
		d = s.size() == 1 ? (s[0] < '0' || s[0] > '9' ? s[0] : s[0] - '0') : std::stod(s);
		if (d > INT_MAX || d < INT_MIN)
			throw IntOverflow();
		if (d > CHAR_MAX || d < CHAR_MIN)
			throw CharOverflow();
	}
	catch (IntOverflow &)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		display_float(static_cast<float>(d));
		display_double(d);
		return ;
	}
	catch (CharOverflow &)
	{
		std::cout << "char: impossible" << std::endl;
		display_int(static_cast<int>(d));
		display_float(static_cast<float>(d));
		display_double(d);
		return ;
	}
	catch (std::exception &)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
		return ;
	}
	display_char(static_cast<char>(d));
	display_int(static_cast<int>(d));
	display_float(static_cast<float>(d));
	display_double(d);
}

void	Utils::display_char(char c)
{
	std::cout << "char: ";
	if (c >= ' ' && c <= '~')
		std::cout << "'" << c << "'";
	else
		std::cout << "Non displayable";
	std::cout << std::endl;
}

void	Utils::display_int(int i)
{
	std::cout << "int: " << i << std::endl;
}

void	Utils::display_float(float f)
{
	std::cout << "float: " << f;
	if (static_cast<int>(f) == f)
		std::cout << ".0";
	std::cout << 'f' << std::endl;
}

void	Utils::display_double(double d)
{
	std::cout << "double: " << d;
	if (static_cast<int>(d) == d)
		std::cout << ".0";
	std::cout << std::endl;
}

Utils::CharOverflow::CharOverflow(): overflow_error("char overflow") { }

Utils::CharOverflow::~CharOverflow() throw() { }

Utils::CharOverflow::CharOverflow(const CharOverflow &a): overflow_error(a.what()) { }

Utils::IntOverflow::IntOverflow(): overflow_error("int overflow") { }

Utils::IntOverflow::~IntOverflow() throw() { }

Utils::IntOverflow::IntOverflow(const IntOverflow &a): overflow_error(a.what()) { }
