#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include "Contact.hpp"

# define PHONEBOOK_SIZE 8

class PhoneBook{
public:
	PhoneBook();
	~PhoneBook();

	void	add();
	void	search();
	void	display();

private:
	Contact	_phonebook[PHONEBOOK_SIZE];
	int		count;
	int		mount;
};

#endif
