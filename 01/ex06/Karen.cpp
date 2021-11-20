#include "Karen.hpp"
#include <iostream>

void	Karen::complain(const std::string &level) const
{
	void (Karen::*function[])(void) const
		= {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	static std::string names[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (size_t i = 0; i < sizeof(names) / sizeof(names[0]); ++i)
	{
		if (names[i] == level)
		{
			switch (i)
			{
				case 0:
					(this->*function[0])();
				case 1:
					(this->*function[1])();
				case 2:
					(this->*function[2])();
				case 3:
					(this->*function[3])();
				default:
					break ;
			}
			return ;
		}
	}
	std::cout << "[ Probably complaining about insignificant problems ]\n" << std::endl;
}

void	Karen::debug(void) const
{
	std::cout << "[ DEBUG ]\nI love to get extra bacon"\
		"for my 7XL-double-cheese-triple-pickle-special-ketchup burger."\
		" I just love it!\n" << std::endl;
}

void	Karen::info(void) const
{
	std::cout << "[ INFO ]\nI cannot believe adding extra"\
		" bacon cost more money. You don't put enough! If you did I would not have to ask"\
		" for it!\n" << std::endl;
}

void	Karen::warning(void) const
{
	std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free. I've been"\
		" coming here for years and you just started working here last month.\n" << std::endl;
}

void	Karen::error(void) const
{
	std::cout << "[ ERROR ]\nThis is unacceptable, I want to speak to the manager now.\n"
		<< std::endl;
}
