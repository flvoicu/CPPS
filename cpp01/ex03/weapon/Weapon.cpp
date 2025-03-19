#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon() {
	type = "Default type";
};

Weapon::Weapon(const std::string &weaponType) : type(weaponType){
}

Weapon::~Weapon() {
	std::cout << "weapon: " << type << " destroyed" << std::endl;
};

std::string Weapon::getType() const {
	return(type);
}

void Weapon::setType(const std::string& weaponType) {
	type = weaponType;
}