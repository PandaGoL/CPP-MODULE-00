#ifndef CPP_CONTACT_CLASS_HPP
# define CPP_CONTACT_CLASS_HPP
#include <iostream>
#include <string>

enum contactData
{
    firstName,
    lastName,
    nickName,
    phoneNumber,
    darkestSecret
};

class Contact
{
    private:
        std::string data[5];

    public:
        Contact();
        ~Contact();

        void setFirstName(std::string s);
        void setLastName(std::string s);
        void setNickName(std::string s);
        void setPhoneNumber(std::string s);
        void setDarkestSecret(std::string s);
        void setDataConsole();

        std::string getFirstName() const;
        std::string getLastName() const;
        std::string getNickName() const;
        std::string getPhoneNumber() const;
        std::string getDarkestSecret() const;
        int         getMaxSizeInfo() const;

        bool        isEmptyContact() const;
};

#endif