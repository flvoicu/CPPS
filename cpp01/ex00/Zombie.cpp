#include "Zombie.hpp"

Zombie::Zombie(const std::string& zombieName) {
	this->name = zombieName;
}

Zombie::~Zombie() {
	std::cout << name +  " destroyed" << std::endl;
}

void Zombie::announce() {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::display() const {
	std::cout << "Zombie: " << name << std::endl;
}

std::string Zombie::getName() const {
	return name;
};

void Zombie::setName(const std::string& zombieName) {
	name = zombieName;
}