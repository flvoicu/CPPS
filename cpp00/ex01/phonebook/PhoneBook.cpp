#include "PhoneBook.hpp"


PhoneBook::PhoneBook() : contactIndex(0), contactCount(0){}

PhoneBook::~PhoneBook() {}

int PhoneBook::getContactCount(){
	return contactCount;
}

void PhoneBook::addContact(const Contact& newContact) {
    if (contactIndex < 8) {
        contacts[contactIndex] = newContact;
        contactIndex++;
        if (contactCount < 8)
            contactCount++;
    } else {
        contactIndex = 0;
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