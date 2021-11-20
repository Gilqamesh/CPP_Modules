#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string s):
Form("RobotomyRequestForm", RobotomyRequestForm::gradeRequiredToSign,
RobotomyRequestForm::gradeRequiredToExecute), target(s)
{ }

RobotomyRequestForm::~RobotomyRequestForm() { }

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &a):
Form("RobotomyRequestForm", RobotomyRequestForm::gradeRequiredToSign,
RobotomyRequestForm::gradeRequiredToExecute), target(a.getName())
{ }

void	RobotomyRequestForm::execute(const Bureaucrat &a) const
{
	if (getIsSigned() == false)
		throw FormNotSigned();
	if (a.getGrade() > gradeRequiredToExecute)
		throw Bureaucrat::GradeTooLowException();
	std::cout << "* Drilling noises *" << std::endl;
	if (getRand(0, 1))
		std::cout << target << " has been robotomized successfully." << std::endl;
	else
		std::cout << "Robotomization has failed." << std::endl;
}
