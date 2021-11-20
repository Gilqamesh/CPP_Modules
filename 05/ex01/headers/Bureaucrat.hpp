#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

// ************************************************************************** //
//                                Bureaucrat Class                            //
// ************************************************************************** //

# include <string>
# include <stdexcept>
# include <iostream>

class Form;

class Bureaucrat
{
	public:
		Bureaucrat(std::string, int);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat &);
		std::string getName(void) const;
		int	getGrade(void) const;
		void incrementGrade(void);
		void decrementGrade(void);
		void signForm(Form &) const;
	private:
		Bureaucrat();
		void checkGrade(void);
		Bureaucrat &operator=(const Bureaucrat &);
		const std::string	name;
		int					grade;
		static const int	min_grade = 150;
		static const int	max_grade = 1;
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
};

std::ostream	&operator<<(std::ostream &, const Bureaucrat &);

#endif /* BUREAUCRAT_HPP */
