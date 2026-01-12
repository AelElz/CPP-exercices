#include "PhoneBook.hpp"
#include <iostream>
#include <string>

int main()
{
    PhoneBook   phonebook;
    std::string command;

    while (1)
    {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, command);
        if (command == "ADD")
            phonebook.addContact();
        else if (command == "SEARCH")
            phonebook.searchContacts();
        else if (command == "EXIT")
            break ;
        else
            std::cout << "Invalid command\n";
    }
}
