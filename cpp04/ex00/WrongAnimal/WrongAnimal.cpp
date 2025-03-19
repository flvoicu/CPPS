#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal") {
    std::cout << type << " has been created!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : type(other.type) {
    std::cout << type << " has been copied!" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
    if (this != &other) {
        type = other.type;
    }
    return *this;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal "<< type << " has been destroyed!" << std::endl;
}

void WrongAnimal::makeSound() const {

    std::cout << type << " makes WrongAnimal sound" << std::endl;
}

std::string WrongAnimal::getType() const {
    return(type);
}
