#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(const std::string& humanName) : name(humanName), weapon(NULL) {
}

HumanB::~HumanB()
{
	std::cout << "HumanB: " << name << " destroyed " << std::endl;
}

void HumanB::setWeapon(Weapon &humanWeapon) {
    weapon = &humanWeapon;
}

void HumanB::attack() {
	std::cout << name << "attacks with their " << weapon->getType() << std::endl;
}