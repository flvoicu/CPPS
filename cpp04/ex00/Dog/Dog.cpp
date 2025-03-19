#include "Dog.hpp"

Dog::Dog() {
    this->type = "Dog";
    std::cout << type << " has been created!" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) {
    this->type = other.type;
    std::cout << type << " has been copied!" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
    if (this != &other) {
        type = other.type;
    }
    return *this;
}

Dog::~Dog() {
    std::cout << type << " has been destroyed!" << std::endl;
}

void Dog::makeSound() const {

    std::cout << type << " makes Dog sound" << std::endl;
}