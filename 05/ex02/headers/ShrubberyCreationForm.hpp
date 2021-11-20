#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

// ************************************************************************** //
//                         ShrubberyCreationForm Class                        //
// ************************************************************************** //

# include "Form.hpp"
# include <string>

class ShrubberyCreationForm: public Form
{
	public:
		ShrubberyCreationForm(std::string);
		~ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm &);
		void execute(const Bureaucrat &) const;
	private:
		ShrubberyCreationForm();
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &);
		static const int	gradeRequiredToSign = 145;
		static const int	gradeRequiredToExecute = 137;
		std::string			target;
};

#endif /* SHRUBBERYCREATIONFORM_HPP */
