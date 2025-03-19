#include "FragTrap.hpp"
#include <string>

class FragTrap;

int main() {
    FragTrap FragTrap1("pepe");
    FragTrap FragTrap2("juan");

    FragTrap1.attack("Uno");
    FragTrap2.attack("Dos");

    FragTrap1.takeDamage(30);
    FragTrap2.takeDamage(50);

    FragTrap1.beRepaired(20);
    FragTrap2.beRepaired(30);

    FragTrap1.highFivesGuys();
    FragTrap2.highFivesGuys();

    return 0;
}