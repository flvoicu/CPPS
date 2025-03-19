#include "Animal.hpp"

Animal::Animal() : type("Animal") {
    std::cout << type << " has been created!" << std::endl;
}

Animal::Animal(const Animal& other) : type(other.type) {
    std::cout << type << " has been copied!" << std::endl;
}

Animal& Animal::operator=(const Animal& other) {
    if (this != &other) {
        type = other.type;
    }
    return *this;
}

Animal::~Animal() {
    std::cout << type << " has been destroyed!" << std::endl;
}

void Animal::makeSound() const {

    std::cout << type << " makes animal sound" << std::endl;
}

std::string Animal::getType() const {
    return(type);
}
