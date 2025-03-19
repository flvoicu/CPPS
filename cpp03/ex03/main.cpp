#include "DiamondTrap.hpp"
#include <string>

class DiamondTrap;

int main() {
    DiamondTrap DiamondTrap1("pepe");
    DiamondTrap DiamondTrap2("juan");

    DiamondTrap1.attack("Uno");
    DiamondTrap2.attack("Dos");

    DiamondTrap1.takeDamage(30);
    DiamondTrap2.takeDamage(50);

    DiamondTrap1.beRepaired(20);
    DiamondTrap2.beRepaired(30);

    DiamondTrap1.guardGate();
    DiamondTrap2.guardGate();

    DiamondTrap1.highFivesGuys();
    DiamondTrap2.highFivesGuys();

    DiamondTrap1.whoAmI();
    DiamondTrap2.whoAmI();

    return 0;
}