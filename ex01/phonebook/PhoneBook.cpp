#include "PhoneBook.hpp"


PhoneBook::PhoneBook() : contactCount(0){}

PhoneBook::~PhoneBook() {}

int PhoneBook::getContactCount(){
	return contactCount;
}

void PhoneBook::addContact(const Contact& newContact) {
    if (contactCount < 8) {
        contacts[contactCount] = newContact;
        contactCount++;
    } else {
        contactCount = 0;
		addContact(newContact);
    }
}

void PhoneBook::displayIndex(int i){
	contacts[i].display();
}

bool PhoneBook::displayContacts() const {
    if (contactCount == 0) {
        std::cout << "No contacts in the PhoneBook." << std::endl;
        return (false);
    }
	displayString("Index");
	displayString("First Name");
	displayString("Last Name");
	displayString("Nickname");
	std::cout << std::endl;
	for (int i = 0; i < contactCount; ++i) {
        std::cout << " " << i << "          |";
        contacts[i].displaySearch();
        std::cout << std::endl;
    }
	return (true);
}