#ifndef KAREN_HPP

// ************************************************************************** //
//                               Karen Class                                  //
// ************************************************************************** //

# include <string>

class Karen
{
	public:
		void	complain(const std::string &level) const;
	private:
		void	debug(void) const;
		void	info(void) const;
		void	warning(void) const;
		void	error(void) const;
};

#endif /* KAREN_HPP */
