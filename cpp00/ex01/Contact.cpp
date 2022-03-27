#include "PhoneBook.hpp"
#include "Contact.hpp"

Contact::Contact() {}

Contact::~Contact() {}

int			Contact::getIndex()
{
	return (_index);
}

std::string	Contact::getFirstName()
{
	return (_firstName);
}

std::string	Contact::getLastName()
{
	return (_lastName);
}

std::string	Contact::getNickname()
{
	return (_nickName);
}

std::string	Contact::getPhoneNumber()
{
	return (_phoneNumber);
}

std::string	Contact::getDarkSecret()
{
	return (_darkSecret);
}

void	Contact::setIndex(int index)
{
	_index = index;
}

void	Contact::setFirstName(std::string firstName)
{
	_firstName = firstName;
}

void	Contact::setLastName(std::string lastName)
{
	_lastName = lastName;
}

void	Contact::setNickname(std::string nickName)
{
	_nickName = nickName;
}

void	Contact::setPhoneNumber(std::string phoneNumber)
{
	_phoneNumber = phoneNumber;
}

void	Contact::setDarkSecret(std::string darkSecret)
{
	_darkSecret = darkSecret;
}

void	Contact::add_contact(int index)
{
	std::string	str;

	setIndex(index);
	std::cout << "Enter first name : ";
	std::getline(std::cin, str);
	setFirstName(str);

	std::cout << "Enter last name : ";
	std::getline(std::cin, str);
	setLastName(str);

	std::cout << "Enter nickname : ";
	std::getline(std::cin, str);
	setNickname(str);

	std::cout << "Enter phone number : ";
	std::getline(std::cin, str);
	setPhoneNumber(str);

	std::cout << "Enter dark secret : ";
	std::getline(std::cin, str);
	setDarkSecret(str);
}

std::string	ft_mod(std::string str)
{
	std::string res;

	res = str;
	if (res.size() > 10)
	{
		res.insert(9, ".");
		res = res.substr(0, 10);
	}
	return (res);
}

void	Contact::search_contact()
{
	std::cout << "|" << std::setw(10) << _index
		<< "|" << std::setw(10) << ft_mod(_firstName)
		<< "|" << std::setw(10) << ft_mod(_lastName)
		<< "|" << std::setw(10) << ft_mod(_nickName)
		<< "|" << std::endl;
}

void	Contact::search_index(int index)
{
	if (index != _index)
		return ;
	std::cout << "index : " << _index << std::endl;
	std::cout << "first name : " << _firstName << std::endl;
	std::cout << "last name : " << _lastName << std::endl;
	std::cout << "nickname : " << _nickName << std::endl;
	std::cout << "phone number : " << _phoneNumber << std::endl;
	std::cout << "dark secret : " << _darkSecret << std::endl;
}
