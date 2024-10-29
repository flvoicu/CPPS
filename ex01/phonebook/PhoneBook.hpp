#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <iostream>
#include "../utils/Utils.hpp"
#include "../contact/Contact.hpp"

class PhoneBook {
private:
    Contact contacts[8];
    int contactCount;

public:
    // Default constructor
    PhoneBook();

    // Destructor
    ~PhoneBook();

    // Add a contact
    void addContact(const Contact& newContact);

	// Getters
	int getContactCount();

	void displayIndex(int i);

    // Display all contacts
    bool displayContacts() const;
};

#endif // PHONEBOOK_HPP