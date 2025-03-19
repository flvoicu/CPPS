#include "Brain.hpp"

Brain::Brain() : type("Brain") {
    std::cout << type << " has been created!" << std::endl;
}

Brain::Brain(const Brain& other) : type(other.type) {
    std::cout << type << " has been copied!" << std::endl;
}

Brain& Brain::operator=(const Brain& other) {
    if (this != &other) {
        type = other.type;
    }
    return *this;
}

Brain::~Brain() {
    std::cout << type << " has been destroyed!" << std::endl;
}

void Brain::makeSound() const {

    std::cout << type << " makes Brain sound" << std::endl;
}

std::string Brain::getType() const {
    return(type);
}
