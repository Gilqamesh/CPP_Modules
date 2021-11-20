#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	b("Polgar Jeno", 1);
		std::cout << b << std::endl;
		Bureaucrat	c("Jani", 200);
		std::cout << c << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat	d("Rose", 1);
		std::cout << d << std::endl;
		d.incrementGrade();
		d.incrementGrade();
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
