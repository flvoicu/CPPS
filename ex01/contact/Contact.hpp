#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>
#include "../utils/Utils.hpp"

class Contact {
private:
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;

public:
    // Default constructor
    Contact();

    // Parameterized constructor
    Contact(const std::string& fName, const std::string& lName, 
            const std::string& nName, const std::string& pNumber, 
            const std::string& secret);

    // Copy constructor
    Contact(const Contact& other);

    // Destructor
    ~Contact();

    // Setters
    void setFirstName(const std::string& fName);
    void setLastName(const std::string& lName);
    void setNickname(const std::string& nName);
    void setPhoneNumber(const std::string& pNumber);
    void setDarkestSecret(const std::string& secret);

    // Getters
    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getNickname() const;
    std::string getPhoneNumber() const;
    std::string getDarkestSecret() const;

    void displaySearch() const;
	void display() const;
};

#endif // CONTACT_HPP