#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook() : count(0), mount(0) {}

PhoneBook::~PhoneBook() {}

void	PhoneBook::add()
{
	if (count < PHONEBOOK_SIZE)
	{
		_phonebook[count].add_contact(count + 1);
		count++;
	}
	else
	{
		_phonebook[mount].add_contact(mount + 1);
		mount++;
	}
	if (mount + 1 == PHONEBOOK_SIZE)
		mount = 0;
}

void	PhoneBook::search()
{
	std::string	s_index;
	int			index;

	std::cout << "|" << std::setw(10) << "index"
		<< "|" << std::setw(10) << "first name"
		<< "|" << std::setw(10) << "last name"
		<< "|" << std::setw(10) << "nickname"
		<< "|" << std::endl;
	for (int i = 0; i < count; i++)
		_phonebook[i].search_contact();
	std::cout << "Enter index : ";
	std::getline(std::cin, s_index);
	index = atoi(s_index.c_str());
	if (index && index < count + 1)
		_phonebook[index - 1].search_index(index);
	else
		std::cerr << "Error input!" << std::endl;
}
