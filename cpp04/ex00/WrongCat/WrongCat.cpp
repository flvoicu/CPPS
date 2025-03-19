#include "WrongCat.hpp"

WrongCat::WrongCat() {
    this->type = "WrongCat";
    std::cout << type << " has been created!" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
    this->type = other.type;
    std::cout << type << " has been copied!" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
    if (this != &other) {
        type = other.type;
    }
    return *this;
}

WrongCat::~WrongCat() {
    std::cout << type << " has been destroyed!" << std::endl;
}

void WrongCat::makeSound() const {

    std::cout << type << " makes WrongCat sound" << std::endl;
}