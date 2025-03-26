#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <iostream>
#include "../utils/Utils.hpp"
#include "../contact/Contact.hpp"

class PhoneBook {
private:
    Contact contacts[8];
    int contactIndex;
    int contactCount;

public:
    PhoneBook();
    ~PhoneBook();

    void addContact(const Contact& newContact);

	int getContactCount();

	void displayIndex(int i);

    bool displayContacts() const;
};

#endif 