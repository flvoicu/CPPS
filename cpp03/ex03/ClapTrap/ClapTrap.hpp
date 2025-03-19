#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap {
    protected:
        std::string name;
        int hitPoints;
        int energyPoints;
        int attackDamage;

    public:

        ClapTrap();
        ClapTrap(const std::string &name);
        
        virtual ~ClapTrap();

        ClapTrap(const ClapTrap &other);

        ClapTrap &operator=(const ClapTrap &other);

        virtual void attack(const std::string& target);
        void takeDamage(int damage);
        void beRepaired(int amount);
};

#endif