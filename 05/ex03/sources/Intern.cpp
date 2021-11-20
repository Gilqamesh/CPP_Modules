#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern() { }

Intern::~Intern() { }

Intern::Intern(const Intern &a)
{
	*this = a;
}

Intern	&Intern::operator=(const Intern &a)
{
	if (this == &a)
		return (*this);
	return (*this);
}

Form	*Intern::makeForm(const std::string &name, const std::string &target) const
{
	Form *forms[] = {
		new PresidentialPardonForm(target),
		new RobotomyRequestForm(target),
		new ShrubberyCreationForm(target)
	};
	static const std::string	formNames[] = {
		"presidential pardon",
		"robotomy request",
		"shrubbery creation"
	};
	Form	*result = nullptr;

	for (size_t i = 0; i < sizeof(formNames) / sizeof(formNames[0]); ++i)
	{
		if (formNames[i] == name)
			result = forms[i];
		else
			delete forms[i];
	}
	if (result == nullptr)
		std::cout << "Intern did not find the form " << name << std::endl;
	else
		std::cout << "Intern created " << name << std::endl;
	return (result);
}
