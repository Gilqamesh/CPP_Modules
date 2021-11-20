#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <random>

Form::Form(std::string n, int sign, int execute):
name(n), isSigned(false), gradeRequiredToSign(sign), gradeRequiredToExecute(execute)
{
	checkGrades();
}

Form::~Form() { }

Form::Form(const Form &a):
name(a.getName()), isSigned(a.getIsSigned()),
gradeRequiredToSign(a.getGradeRequiredToSign()),
gradeRequiredToExecute(a.getGradeRequiredToExecute())
{
	checkGrades();
}

std::string	Form::getName(void) const
{
	return (name);
}

bool	Form::getIsSigned(void) const
{
	return (isSigned);
}

int	Form::getGradeRequiredToSign(void) const
{
	return (gradeRequiredToSign);
}

int	Form::getGradeRequiredToExecute(void) const
{
	return (gradeRequiredToExecute);
}

void	Form::beSigned(const Bureaucrat &a)
{
	if (a.getGrade() > gradeRequiredToSign)
		throw Bureaucrat::GradeTooLowException();
	isSigned = true;
}

void	Form::checkGrades(void)
{
	if (gradeRequiredToSign < max_grade || gradeRequiredToExecute < max_grade)
		throw GradeTooHighException();
	if (gradeRequiredToSign > min_grade || gradeRequiredToExecute > min_grade)
		throw GradeTooLowException();
}

Form::GradeTooHighException::GradeTooHighException():
range_error("Form's grade is too high") { }

Form::GradeTooHighException::~GradeTooHighException() throw() { }

Form::GradeTooHighException::GradeTooHighException(const GradeTooHighException &a):
range_error(a.what()) { }

Form::GradeTooLowException::GradeTooLowException():
range_error("Form's grade is too low") { }

Form::GradeTooLowException::~GradeTooLowException() throw() { }

Form::GradeTooLowException::GradeTooLowException(const GradeTooLowException &a):
range_error(a.what()) { }

std::ostream	&operator<<(std::ostream &os, const Form &a)
{
	os << "Form name: " << a.getName() << ", is signed: " << (a.getIsSigned() ? "yes" : "no")
		<< ", grade required to sign: " << a.getGradeRequiredToSign()
		<< ", grade required to execute " << a.getGradeRequiredToExecute();
	return (os);
}

Form::FormNotSigned::FormNotSigned():
runtime_error("Form is not signed") { }

Form::FormNotSigned::~FormNotSigned() throw() { }

Form::FormNotSigned::FormNotSigned(const FormNotSigned &a):
runtime_error(a.what()) { }

int	Form::getRand(int from, int to) const
{
	static std::random_device									dev;
	static std::mt19937											rng(dev());
	std::uniform_int_distribution<std::mt19937::result_type>	dist(from, to);
	return (dist(rng));
}
