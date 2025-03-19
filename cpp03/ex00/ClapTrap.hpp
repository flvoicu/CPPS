#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap {
    private:
        std::string name;
        int hitPoints;
        int energyPoints;
        int attackDamage;

    public:

        ClapTrap();
        ClapTrap(const std::string &name);
        
        ~ClapTrap();

        ClapTrap(const ClapTrap &other);

        ClapTrap &operator=(const ClapTrap &other);

        void attack(const std::string& target);
        void takeDamage(int damage);
        void beRepaired(int amount);
};

#endif