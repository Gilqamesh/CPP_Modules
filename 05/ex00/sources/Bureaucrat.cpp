#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string s, int a): name(s), grade(a)
{
	checkGrade();
}

Bureaucrat::~Bureaucrat() { }

Bureaucrat::Bureaucrat(const Bureaucrat &a): name(a.getName()), grade(a.getGrade())
{
	checkGrade();
}

std::string	Bureaucrat::getName(void) const
{
	return (name);
}

int	Bureaucrat::getGrade(void) const
{
	return (grade);
}

void	Bureaucrat::incrementGrade(void)
{
	--grade;
	checkGrade();
}

void	Bureaucrat::decrementGrade(void)
{
	++grade;
	checkGrade();
}

void	Bureaucrat::checkGrade(void)
{
	if (grade < max_grade)
		throw GradeTooHighException();
	if (grade > min_grade)
		throw GradeTooLowException();
}

Bureaucrat::GradeTooHighException::GradeTooHighException():
range_error("Grade is too high") { }

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() { }

Bureaucrat::GradeTooHighException::GradeTooHighException(const GradeTooHighException &a):
range_error(a.what()) { }

Bureaucrat::GradeTooLowException::GradeTooLowException():
range_error("Grade is too low") { }

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() { }

Bureaucrat::GradeTooLowException::GradeTooLowException(const GradeTooLowException &a):
range_error(a.what()) { }

std::ostream	&operator<<(std::ostream &os, const Bureaucrat &a)
{
	os << a.getName() << ", bureucrat grade " << a.getGrade() << ".";
	return (os);
}
