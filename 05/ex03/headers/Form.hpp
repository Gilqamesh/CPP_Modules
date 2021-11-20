#ifndef FORM_HPP
# define FORM_HPP

// ************************************************************************** //
//                                Form Class                                  //
// ************************************************************************** //

# include <string>
# include <stdexcept>
# include <iostream>

class Bureaucrat;

class Form
{
	public:
		Form(std::string, int, int);
		virtual ~Form();
		Form(const Form &);
		std::string getName(void) const;
		bool getIsSigned(void) const;
		int getGradeRequiredToSign(void) const;
		int getGradeRequiredToExecute(void) const;
		void beSigned(const Bureaucrat &);
		virtual void execute(const Bureaucrat &) const = 0;
		int getRand(int, int) const;
	private:
		Form &operator=(const Form &);
		Form();
	protected:
		const std::string	name;
		bool				isSigned;
		const int			gradeRequiredToSign;
		const int			gradeRequiredToExecute;
		static const int	min_grade = 150;
		static const int	max_grade = 1;
		void checkGrades(void);
	public:
		class GradeTooHighException: public std::range_error
		{
			public:
				GradeTooHighException();
				~GradeTooHighException() throw();
				GradeTooHighException(const GradeTooHighException &);
		};
		class GradeTooLowException: public std::range_error
		{
			public:
				GradeTooLowException();
				~GradeTooLowException() throw();
				GradeTooLowException(const GradeTooLowException &);
		};
		class FormNotSigned: public std::runtime_error
		{
			public:
				FormNotSigned();
				~FormNotSigned() throw();
				FormNotSigned(const FormNotSigned &);
		};
};

std::ostream	&operator<<(std::ostream &, const Form &);

#endif /* FORM_HPP */
