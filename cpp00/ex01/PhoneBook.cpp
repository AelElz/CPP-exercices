#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	count = 0;
	oldest = 0;
}
std::string PhoneBook::truncate(std::string &s)
{
	if (s.length() > 10)
		return (s.substr(0, 9) + ".");
	return (s);
}

void    PhoneBook::addContact()
{
	std::string	input;
	Contact		newContact;

    std::cout << "First name: ";
    std::getline(std::cin, input);
    if (input.empty())
		return ;
    newContact.setFirstName(input);

	std::cout << "Last name: ";
	std::getline(std::cin, input);
	if (input.empty())
		return ;
	newContact.setLastName(input);

	std::cout << "Nick name: ";
	std::getline(std::cin, input);
	if (input.empty())
		return ;
	newContact.setNickname(input);

	std::cout << "Phone number: ";
	std::getline(std::cin, input);
	if (input.empty())
		return ;
	newContact.setPhoneNumber(input);

	std::cout << "Darkest secret: ";
	std::getline(std::cin, input);
	if (input.empty())
		return ;
	newContact.setDarkestSecret(input);

	if (count < 8)
	{
		contacts[count] = newContact;
		count++;
	}
	else
	{
		contacts[oldest] = newContact;
		oldest = (oldest + 1) % 8;
	}
}

void	PhoneBook::searchContacts()
{
	int			i;
	int			index;
	std::string	fn;
	std::string	ln;
	std::string	nn;

	i = 0;
	std::cout << "     Index|First Name| Last Name|  Nickname" << std::endl;
	while (i < count)
	{
		fn = contacts[i].getFirstName();
		ln = contacts[i].getLastName();
		nn = contacts[i].getNickname();
		if (fn.length() > 10)
			fn = fn.substr(0, 9) + ".";
        if (ln.length() > 10)
			ln = ln.substr(0, 9) + ".";
        if (nn.length() > 10)
			nn = nn.substr(0, 9) + ".";
        std::cout << std::setw(10) << i << "|"
                  << std::setw(10) << fn << "|"
                  << std::setw(10) << ln << "|"
                  << std::setw(10) << nn << std::endl;
		i++;
	}
    std::cout << "Enter index to view: ";
    std::cin >> index;
	if (!(std::cin >> index))
    {
        std::cout << "Invalid input" << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return ;
    }
    std::cin.ignore();
    if (index < 0 || index >= count)
    {
        std::cout << "Index out of range" << std::endl;
        return ;
    }

    Contact	&c = contacts[index];

    std::cout << "First name: " << c.getFirstName() << std::endl;
    std::cout << "Last name: " << c.getLastName() << std::endl;
    std::cout << "Nickname: " << c.getNickname() << std::endl;
    std::cout << "Phone number: " << c.getPhoneNumber() << std::endl;
    std::cout << "Darkest secret: " << c.getDarkestSecret() << std::endl;
}
