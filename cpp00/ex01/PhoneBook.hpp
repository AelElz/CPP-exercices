#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iomanip>
#include <iostream>
#include <limits>

class PhoneBook
{
	private:
		Contact contacts[8];
		int count;
		int oldest;
		std::string truncate(std::string &s);
	public:
		PhoneBook();
		void	addContact();
		void	searchContacts();
};

#endif
