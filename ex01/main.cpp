#include <iostream>
#include <cctype>
#include "phonebook/PhoneBook.hpp"
#include "utils/Utils.hpp"

Contact createContact()
{
	std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;

	firstName = getString("First Name");
	lastName = getString("Last Name");
	nickname = getString("Nickname");
	phoneNumber = getString("Phone Number");
	darkestSecret = getString("Darkest Secret");

	Contact contact(firstName, lastName, nickname, phoneNumber, darkestSecret);
	return (contact);
}

int main() {
    PhoneBook phoneBook;
	std::string command;
	int	index;

	while (1)
	{
		while (1)
		{
			std::cout << "ADD | SEARCH | EXIT" << std::endl;
			std::getline(std::cin, command);
			if (!command.empty())
				toUpperCase(command);
			std::cout << command << std::endl;
			if (!(command != "ADD" && command != "SEARCH" && command != "EXIT"))
				break;
			std::cout << "Invalid command" << std::endl;
		}
		if (command == "ADD")
		{
			phoneBook.addContact(createContact());
		}
		if (command == "SEARCH")
		{
			if(phoneBook.displayContacts())
			{
				while (1)
				{
						std::cout << "Choose an index" << std::endl;
						if (std::cin >> index){
							if (index < phoneBook.getContactCount())
							{
								std::cin.clear();
								std::cin.ignore();
								break;
							}
						}
						std::cin.clear();
						std::cin.ignore();
						std::cout << "Invalid index" << std::endl;
				}
				phoneBook.displayIndex(index);
			}
		}
		if (command == "EXIT")
			break;
	}
    return 0;
}