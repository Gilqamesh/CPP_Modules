#include "PhoneBook.hpp"

/*
** contact constructor
*/
contact::contact()
{
	first_name.clear();
	last_name.clear();
	nickname.clear();
	phone_number.clear();
	darkest_secret.clear();
}

/*
** PhoneBook constructor
*/
PhoneBook::PhoneBook()
{
	currentIndex = 0;
	currentlyFilled = 0;
}

/*
** adds a contact to the phonebook
*/
void	PhoneBook::add()
{
	std::cout << "First name:\n";
	std::getline(std::cin, contacts[currentIndex].first_name);
	std::cout << "Last name:\n";
	std::getline(std::cin, contacts[currentIndex].last_name);
	std::cout << "Nickname:\n";
	std::getline(std::cin, contacts[currentIndex].nickname);
	std::cout << "Phone_number\n";
	std::getline(std::cin, contacts[currentIndex].phone_number);
	if (++currentIndex == 8)
		currentIndex = 0;
	if (currentlyFilled < 8)
		currentlyFilled++;
}

static void	myformat(const std::string &arg, const std::string &pad = "")
{
	int		len = arg.length();
	bool	truncate = false;
	if (len > 10)
		truncate = true;
	if (truncate)
		std::cout << std::setw(WIDTH - 1) << arg.substr(0, 9) << '.';
	else
		std::cout << std::setw(WIDTH) << arg;
	std::cout << pad;
}

/*
** Lists contacts and lets user to print an entry.
*/
void	PhoneBook::search()
{
	if (currentlyFilled == 0)
	{
		std::cout << "No entries in the phonebook\n";
		return ;
	}
	for (int i = 0; i < currentlyFilled; i++)
	{
		myformat(std::to_string(i), "|");
		myformat(contacts[i].first_name, "|");
		myformat(contacts[i].last_name, "|");
		myformat(contacts[i].nickname);
		std::cout << '\n';
	}
	std::cout << "Index of the desired entry:\n";
	int entry_index;
	std::cin >> entry_index;
	if (entry_index < 0 || entry_index > currentlyFilled - 1)
	{
		std::cout << "No entry on the index\n";
		return ;
	}
	std::cout << "First name: " << contacts[entry_index].first_name << std::endl;
	std::cout << "Last name: " << contacts[entry_index].last_name << std::endl;
	std::cout << "Nickname: " << contacts[entry_index].nickname << std::endl;
	std::cout << "Phone number: " << contacts[entry_index].phone_number << std::endl;
}
