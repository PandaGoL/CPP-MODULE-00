#ifndef CPP_PHONEBOOK_CLASS_HPP
# define CPP_PHONEBOOK_CLASS_HPP
#include "Contact_Class.hpp"

class PhoneBook
{
private:
   Contact contacts[8];
   int cntContact;
   void viewMiniTable(int max) const;
   void viewContacts() const;
   void readConsoleNumContact() const;
   void viewFullInfo(Contact contact) const;

public:
    PhoneBook();
    ~PhoneBook();
    void getMan() const;
    void addContact();
    void searchContact() const;

};

#endif