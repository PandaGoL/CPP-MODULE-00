#include "PhoneBook_Class.hpp"
#include <iomanip>
#include <iostream>

void PhoneBook::viewContacts(void) const
{
    std::cout << "+-------------------------------------------+" << std::endl;
	std::cout << "|               PHONE BOOK                  |" << std::endl;
	std::cout << "+-------------------------------------------+" << std::endl;
	
	std::cout << "+-------------------------------------------+" << std::endl;
	std::cout << "|     Index| FirstName| LastName |  NickName|" << std::endl;
	std::cout << "+-------------------------------------------+" << std::endl;
    for (int i = 0; i < this->cntContact; i++)
    {
        std::cout <<"|"<< std::setw(10) << i + 1 << "|";
        if (this->contacts[i].getFirstName().length() > 10)
        {
            std::cout << this->contacts[i].getFirstName().substr(0, 9) << ".|";
        }
        else
        {
            std::cout << std::setw(10) << this->contacts[i].getFirstName() << "|";
        }
        if (this->contacts[i].getLastName().length() > 10)
        {
            std::cout << this->contacts[i].getFirstName().substr(0, 9) << ".|";
        }
        else
		{
			std::cout << std::setw(10) << this->contacts[i].getLastName() << "|"; 
		}
        if (this->contacts[i].getNickName().length() > 10)
		{
			std::cout << this->contacts[i].getNickName().substr(0, 9) << ".|";
		}
		else
		{
			std::cout << std::setw(10) << this->contacts[i].getNickName() << "|"; 
		}
        std::cout << std::endl;
    }
    std::cout << "+--------------------------------------+" << std::endl;
}

void PhoneBook::viewMiniTable(int max) const
{
    std::cout << "+";
    for (int i = 0; i <= max; i++)
        std::cout << "-";
    std::cout << "+" << std::endl;
}

void	PhoneBook::viewFullInfo(Contact contact) const
{
	int max = contact.getMaxSizeInfo();
	int maxInfo =  contact.getMaxSizeInfo();

	max += 17;
	viewMiniTable(max);
	std::cout << "|" << "FirstName:       |" << std::setw(maxInfo) << contact.getFirstName() << "|" << std::endl;
	viewMiniTable(max);
	std::cout << "|" << "LastName:        |" << std::setw(maxInfo) << contact.getLastName() << "|" << std::endl;
	viewMiniTable(max);
	std::cout << "|" << "NickName:        |" << std::setw(maxInfo) << contact.getNickName() << "|"  << std::endl;
	viewMiniTable(max);
	std::cout << "|" << "Phone Number:    |" << std::setw(maxInfo) << contact.getPhoneNumber() << "|" << std::endl;
	viewMiniTable(max);
	std::cout << "|" << "Darkest Secret:  |" << std::setw(maxInfo) << contact.getDarkestSecret() << "|" << std::endl;
	viewMiniTable(max);
}

void	PhoneBook::readConsoleNumContact(void) const
{
	std::string s_id;
	int	index;

	std::cout << "Enter num contact:" << std::endl;
	getline(std::cin, s_id);
	index = atoi(s_id.c_str());
	if (index <= 0 || index > this->cntContact)
	{
		std::cout << "Contact not found" << std::endl;
		return ;
	}
	viewFullInfo(contacts[index - 1]);
}

PhoneBook::PhoneBook(void)
{
    this->cntContact = 0;
}

PhoneBook::~PhoneBook(void)
{

}

void    PhoneBook::getMan() const 
{
	std::cout << "+-------------------------------------------------------+" << std::endl;
    std::cout << "|                 AWESOME PHONE BOOK                    |" << std::endl;
    std::cout << "+-------------------------------------------------------+" << std::endl;
    std::cout << "|  Welcome in the 80s and its unbelievable technology!  |" << std::endl;
    std::cout << "|  I present to your attention the \"PhoneBook\"        |" << std::endl;
    std::cout << "|  Here you can save up to 8 contacts - try it!         |" << std::endl;
    std::cout << "+-------------------------------------------------------+" << std::endl;
    std::cout << std::endl;
    std::cout << "+-------------------------------------------------------+" << std::endl;
    std::cout << "|                  AVAILABLE COMMANDS                   |" << std::endl;
    std::cout << "+-------------------------------------------------------+" << std::endl;
    std::cout << "|                                                       |" << std::endl;
    std::cout << "|     ADD     -   use this command to add contact       |" << std::endl;
    std::cout << "|                 to phone book                         |" << std::endl;
    std::cout << "|                                                       |" << std::endl;
    std::cout << "|     SEARCH  -   shows a list of contacts,             |" << std::endl;
    std::cout << "|                 then you need to enter the serial     |" << std::endl;
    std::cout << "|                 number of the contact to view         |" << std::endl;
    std::cout << "|                 the detailed information.             |" << std::endl;
    std::cout << "|                 0 to exit from search                 |" << std::endl;
    std::cout << "|                                                       |" << std::endl;
    std::cout << "|     EXIT    -   exit from PhoneBook                   |" << std::endl;
    std::cout << "|                 ATTENTION! All contacts will be lost! |" << std::endl;
    std::cout << "|                                                       |" << std::endl;
    std::cout << "+-------------------------------------------------------+" << std::endl;
}

void	PhoneBook::addContact()
{
    if (this->cntContact == 8)
    {
        std::cout << "Sorry, PhoneBook is full" << std::endl;
        return ;
    }
    std::cout << "Add new contact" << std::endl;
    this->contacts[cntContact].setDataConsole();
	if (this->contacts[cntContact].isEmptyContact())
	{
   		std::cout << "Sorry, you write empty contact" << std::endl;
		this->contacts[cntContact] = Contact();
		return ;
	}
    this->cntContact++;
    std::cout << "Count contact: " << this->cntContact << std::endl;
}

void	PhoneBook::searchContact(void) const
{
	if (this->cntContact == 0)
	{
		std::cout << "Sorry, PhoneBook is empty\n";
		return ;
	}
	viewContacts();
	readConsoleNumContact();
}