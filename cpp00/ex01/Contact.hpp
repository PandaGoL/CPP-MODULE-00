#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>

class Contact{
public:
	Contact();
	~Contact();

	int			getIndex();
	std::string	getFirstName();
	std::string	getLastName();
	std::string	getNickname();
	std::string	getPhoneNumber();
	std::string	getDarkSecret();

	void	setIndex(int index);
	void	setFirstName(std::string firstName);
	void	setLastName(std::string lastName);
	void	setNickname(std::string nickName);
	void	setPhoneNumber(std::string phoneNumber);
	void	setDarkSecret(std::string darkSecret);

	void	add_contact(int index);
	void	search_contact();
	void	search_index(int index);
private:
	int			_index;
	std::string _firstName;
	std::string _lastName;
	std::string _nickName;
	std::string	_phoneNumber;
	std::string	_darkSecret;
};

#endif
