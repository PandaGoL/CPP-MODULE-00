#include "PhoneBook.hpp"

static void	displayAction()
{
	std::cout << std::endl << "1) ADD - add new contact" << std::endl;
	std::cout << "2) SEARCH - find contact" << std::endl;
	std::cout << "3) EXIT - finish program" << std::endl;
	std::cout << "Enter action ";
}

static void	start()
{
	std::string	action;
	PhoneBook	phonebook;

	while (!std::cin.eof())
	{
		displayAction();
		std::getline(std::cin, action);
		if (action == "EXIT")
			exit(0);
		if (action == "ADD")
			phonebook.add();
		if (action == "SEARCH")
			phonebook.search();
	}
}

int main()
{
	start();
	return (0);
}
