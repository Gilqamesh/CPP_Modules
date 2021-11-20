#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

// ************************************************************************** //
//                         RobotomyRequestForm Class                          //
// ************************************************************************** //

# include "Form.hpp"
# include <string>

class RobotomyRequestForm: public Form
{
	public:
		RobotomyRequestForm(std::string);
		RobotomyRequestForm(const RobotomyRequestForm &);
		~RobotomyRequestForm();
		void execute(const Bureaucrat &) const;
	private:
		RobotomyRequestForm();
		RobotomyRequestForm &operator=(const RobotomyRequestForm &);
		static const int	gradeRequiredToSign = 72;
		static const int	gradeRequiredToExecute = 45;
		std::string			target;
};

#endif /* ROBOTOMYREQUESTFORM_HPP */
