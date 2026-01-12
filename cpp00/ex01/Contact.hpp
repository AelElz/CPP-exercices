#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
	private:
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string darkestSecret;
	public:
		Contact();
		void	setFirstName(std::string &s);
		void	setLastName(std::string &s);
		void	setNickname(std::string &s);
		void	setPhoneNumber(std::string &s);
		void	setDarkestSecret(std::string &s);

		std::string	getFirstName();
		std::string	getLastName();
		std::string	getNickname();
		std::string	getPhoneNumber();
		std::string	getDarkestSecret();
};

#endif
