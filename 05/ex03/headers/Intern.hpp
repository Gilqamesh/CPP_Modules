#ifndef INTERN_HPP
# define INTERN_HPP

// ************************************************************************** //
//                                Intern Class                                //
// ************************************************************************** //

# include <string>

class Form;

class Intern
{
	public:
		Intern();
		~Intern();
		Intern(const Intern &);
		Intern &operator=(const Intern &);
		Form *makeForm(const std::string &, const std::string &) const;
};

#endif /* INTERN_HPP */
