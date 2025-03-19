#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "./ClapTrap/ClapTrap.hpp"

class FragTrap : public ClapTrap {
        
    public:
        FragTrap();
        FragTrap(const std::string &name);
        
        ~FragTrap();

        FragTrap(const FragTrap &other);

        FragTrap &operator=(const FragTrap &other);

        void highFivesGuys();
};

#endif