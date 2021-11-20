#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include <iostream>
# include <iomanip>
# define WIDTH 10

class contact
{
	std::string	darkest_secret;
	public:
		contact ();
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
};

class PhoneBook
{
	contact	contacts[8];
	int		currentIndex;
	int		currentlyFilled;
	public:
		PhoneBook ();
		void add ();
		void search ();
};

#endif
