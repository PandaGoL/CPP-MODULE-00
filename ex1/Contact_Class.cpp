#include "Contact_Class.hpp"

Contact::Contact(void)
{
    this->data[firstName] = "-----";
    this->data[lastName] = "-----";
    this->data[nickName] = "-----";
    this->data[phoneNumber] = "-----";
    this->data[darkestSecret] = "-----";
}

Contact:: ~Contact(void)
{

}

void Contact::setFirstName(std::string s)
{
    this->data[firstName] = s;
}

void Contact::setLastName(std::string s)
{
    this->data[lastName] = s;
}

void Contact::setNickName(std::string s)
{
    this->data[nickName] = s;
}

void Contact::setPhoneNumber(std::string s)
{
this->data[phoneNumber] = s;
}

void Contact::setDarkestSecret(std::string s)
{
    this->data[darkestSecret] = s;
}

void Contact::setDataConsole()
{
    std::string s;

    std::cout << "Please Enter FirstName:" << std::endl;
    std::getline(std::cin, s);
    this->setFirstName(s);

    std::cout << "Please Enter LastName:" << std::endl;
    std::getline(std::cin, s);
    this->setLastName(s);

    std::cout << "Please Enter NickName:" << std::endl;
    std::getline(std::cin, s);
    this->setNickName(s);

    std::cout << "Please Enter PhoneNumber:" << std::endl;
    std::getline(std::cin, s);
    this->setPhoneNumber(s);

    std::cout << "Please Enter DarkestSecret:" << std::endl;
    std::getline(std::cin, s);
    this->setDarkestSecret(s);

    std::cout << "Contact created" << std::endl;
}

std::string Contact::getFirstName() const
{
    return (this->data[lastName]);
}

std::string Contact::getLastName() const
{
    return (this->data[firstName]);
}

std::string Contact::getNickName() const
{
    return (this->data[nickName]);
}

std::string Contact::getPhoneNumber() const
{
    return (this->data[phoneNumber]);
}

std::string Contact::getDarkestSecret() const
{
    return (this->data[darkestSecret]);
}

int         Contact::getMaxSizeInfo() const
{
    int max;

    max = 0;
    for (int i = firstName; i <= darkestSecret; i++)
    {
        if ((int)this->data[i].length() >= max)
            max = data[i].length();
    }
    return (max);
}

bool        Contact::isEmptyContact() const
{
    int len;

    len = 0;
    for (int i = firstName; i <= darkestSecret; i++)
    {
        len += this->data[i].length();
    }
    if (len == 0)
        return (true);
    return (false);
}
