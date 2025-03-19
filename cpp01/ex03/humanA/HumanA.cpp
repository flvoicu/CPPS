#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(const std::string &humanName,  Weapon &humanWeapon): name(humanName), weapon(humanWeapon){
}

HumanA::~HumanA()
{
	std::cout << "HumanA: " << name << " destroyed" << std::endl;
}

void HumanA::setWeapon(Weapon &humanWeapon) {
    weapon = humanWeapon;
}

void HumanA::attack() {
	std::cout << name << "attacks with their " << weapon.getType() << std::endl;
}