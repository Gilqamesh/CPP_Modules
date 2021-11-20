#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	try
	{
		Form		form("Delete taxes", 10, 5);
		Bureaucrat	b("Polgar Jeno", 5);
		b.signForm(form);
		Bureaucrat	b2("Jani", 20);
		b2.signForm(form);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Form		form("Increase the price of fuel", 150, 150);
		Bureaucrat	b("Ideal Bureaucrat", 150);
		b.signForm(form);
		Form		impossible_form("Create utopia", 0, 0);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
