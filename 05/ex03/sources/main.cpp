#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
#include <iostream>

int	main(void)
{
	Intern	someIntern;
	Form	*form;

	/* Possible forms
		"presidential pardon",
		"robotomy request",
		"shrubbery creation"
	*/
	form = someIntern.makeForm("presidential pardon", "Joe");
	delete form;
	form = someIntern.makeForm("make utopia", "world");
	delete form;
	form = someIntern.makeForm("delete taxes", "world");
	delete form;
	form = someIntern.makeForm("robotomy request", "Phil");

	Bureaucrat	president("Polgar Jeno", 1);
	president.signForm(*form);
	president.executeForm(*form);

	system("leaks a.out");
}
