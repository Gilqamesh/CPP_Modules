#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	phonebook;
	std::string	userInput;

	do
	{
		userInput.clear();
		std::cout << "Please enter a command:\n";
		std::getline(std::cin, userInput);
		if (userInput == "ADD")
			phonebook.add();
		else if (userInput == "SEARCH")
			phonebook.search();
	}
	while (userInput != "EXIT");
	exit(EXIT_SUCCESS);
}
