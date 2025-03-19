#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "./ClapTrap/ClapTrap.hpp"

class ScavTrap : public ClapTrap {
        
    public:

        ScavTrap();
        ScavTrap(const std::string &name);
        
        ~ScavTrap();

        ScavTrap(const ScavTrap &other);

        ScavTrap &operator=(const ScavTrap &other);

        void guardGate();

        void attack(const std::string& target);

};

#endif