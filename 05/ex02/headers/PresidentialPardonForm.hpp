#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

// ************************************************************************** //
//                         PresidentialPardonForm Class                       //
// ************************************************************************** //

# include "Form.hpp"
# include <string>

class PresidentialPardonForm: public Form
{
	public:
		PresidentialPardonForm(std::string);
		~PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &);
		void execute(const Bureaucrat &) const;
	private:
		PresidentialPardonForm();
		PresidentialPardonForm &operator=(const PresidentialPardonForm &);
		static const int	gradeRequiredToSign = 25;
		static const int	gradeRequiredToExecute = 5;
		std::string			target;
};

#endif /* PRESIDENTIALPARDONFORM_HPP */
