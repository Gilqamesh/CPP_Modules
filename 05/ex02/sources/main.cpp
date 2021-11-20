#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>

int	main(void)
{
	Form	*form;
	Bureaucrat				president("Arnold Schwarzenegger", 1);
	Bureaucrat				counselor("Polgar Jeno", 20);
	Bureaucrat				jani("Jani", 150);
	Bureaucrat				rose("Rose", 75);

	// Trying to sign and execute forms with dynamic binding using exception handling

	// PresidentialPardonForm signed and executed from Bureaucrat method
	try
	{
		form = new PresidentialPardonForm("Jani");
		counselor.signForm(*form);
		president.executeForm(*form);
		delete form;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	// PresidentialPardonForm signed and executed from form method
	try
	{
		form = new PresidentialPardonForm("Jani");
		form->beSigned(counselor);
		form->execute(president);
		delete form;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	// RobotomyRequestForm
	try
	{
		form = new RobotomyRequestForm("Jani");
		form->beSigned(counselor);
		form->execute(president);
		delete form;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	// RobotomyRequestForm
	try
	{
		form = new RobotomyRequestForm("Jani");
		form->beSigned(counselor);
		form->execute(president);
		delete form;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	// ShrubberyCreationForm
	try
	{
		form = new ShrubberyCreationForm("tree1");
		form->beSigned(rose);
		form->execute(rose);
		delete form;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	// ShrubberyCreationForm
	try
	{
		form = new ShrubberyCreationForm("tree2");
		form->beSigned(rose);
		form->execute(rose);
		delete form;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	// ShrubberyCreationForm
	try
	{
		form = new ShrubberyCreationForm("tree3");
		form->beSigned(rose);
		form->execute(rose);
		delete form;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	system("leaks a.out");
}
