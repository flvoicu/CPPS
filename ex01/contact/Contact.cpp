# include "Contact.hpp"

Contact::Contact() 
        : firstName("Unknown"), lastName("Unknown"), nickname("Unknown"),
          phoneNumber("000-000-0000"), darkestSecret("None") {
    }

Contact::Contact(const std::string& fName, const std::string& lName, 
            const std::string& nName, const std::string& pNumber, 
            const std::string& secret) 
        : firstName(fName), lastName(lName), nickname(nName), 
          phoneNumber(pNumber), darkestSecret(secret) {}

Contact::Contact(const Contact& other) 
        : firstName(other.firstName), lastName(other.lastName), 
          nickname(other.nickname), phoneNumber(other.phoneNumber), 
          darkestSecret(other.darkestSecret) {}

Contact::~Contact() {}

// Setters
void Contact::setFirstName(const std::string& fName) {
    firstName = fName;
}

void Contact::setLastName(const std::string& lName) {
    lastName = lName;
}

void Contact::setNickname(const std::string& nName) {
    nickname = nName;
}

void Contact::setPhoneNumber(const std::string& pNumber) {
    phoneNumber = pNumber;
}

void Contact::setDarkestSecret(const std::string& secret) {
    darkestSecret = secret;
}

// Getters
std::string Contact::getFirstName() const {
    return firstName;
}

std::string Contact::getLastName() const {
    return lastName;
}

std::string Contact::getNickname() const {
    return nickname;
}

std::string Contact::getPhoneNumber() const {
    return phoneNumber;
}

std::string Contact::getDarkestSecret() const {
    return darkestSecret;
}

// displaySearch method
void Contact::displaySearch() const {
	displayString(firstName);
	displayString(lastName);
	displayString(nickname);
}
	
void Contact::display() const {
    std::cout << "First Name: " << firstName << std::endl;
    std::cout << "Last Name: " << lastName << std::endl;
    std::cout << "Nickname: " << nickname << std::endl;
    std::cout << "Phone Number: " << phoneNumber << std::endl;
    std::cout << "Darkest Secret: " << darkestSecret << std::endl;
}