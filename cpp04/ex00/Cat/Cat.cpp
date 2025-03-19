#include "Cat.hpp"

Cat::Cat() {
    this->type = "Cat";
    std::cout << type << " has been created!" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other) {
    this->type = other.type;
    std::cout << type << " has been copied!" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
    if (this != &other) {
        type = other.type;
    }
    return *this;
}

Cat::~Cat() {
    std::cout << type << " has been destroyed!" << std::endl;
}

void Cat::makeSound() const {

    std::cout << type << " makes Cat sound" << std::endl;
}