#include "Contact.hpp"

Contact::Contact() {}

void    Contact::setFirstName(std::string &s)
{
    firstName = s;
}

void    Contact::setLastName(std::string &s)
{
    lastName = s;
}

void    Contact::setNickname(std::string &s)
{
    nickName = s;
}

void    Contact::setPhoneNumber(std::string &s)
{
    phoneNumber = s;
}

void    Contact::setDarkestSecret(std::string &s)
{
    darkestSecret = s;
}
std::string Contact::getFirstName() { return firstName; }
std::string Contact::getLastName() { return lastName; }
std::string Contact::getNickname() { return nickName; }
std::string Contact::getPhoneNumber() { return phoneNumber; }
std::string Contact::getDarkestSecret() { return darkestSecret; }