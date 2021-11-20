#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string s):
Form("PresidentialPardonForm", PresidentialPardonForm::gradeRequiredToSign,
PresidentialPardonForm::gradeRequiredToExecute), target(s)
{ }

PresidentialPardonForm::~PresidentialPardonForm() { }

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &a):
Form("PresidentialPardonForm", PresidentialPardonForm::gradeRequiredToSign,
PresidentialPardonForm::gradeRequiredToExecute), target(a.getName())
{ }

void	PresidentialPardonForm::execute(const Bureaucrat &a) const
{
	if (getIsSigned() == false)
		throw FormNotSigned();
	if (a.getGrade() > gradeRequiredToExecute)
		throw Bureaucrat::GradeTooLowException();
	std::cout << target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}
