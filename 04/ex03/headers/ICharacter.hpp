#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

// ************************************************************************** //
//                                ICharacter Class                            //
// ************************************************************************** //

# include <string>
# define DEFAULT_CHARACTER_NAME

class AMateria;

class ICharacter
{
	public:
		ICharacter();
		ICharacter(std::string);
		virtual ~ICharacter();
		ICharacter(const ICharacter &);
		ICharacter &operator=(const ICharacter &);
		virtual std::string const &getName(void) const = 0;
		virtual void equip(AMateria *) = 0;
		virtual void unequip(int) = 0;
		virtual void use(int, ICharacter &) = 0;
	protected:
		std::string	name;
};

std::ostream	&operator<<(std::ostream &, const ICharacter &);

#endif /* ICHARACTER_HPP */
