#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
private:
    std::string name;

public:
	Zombie();
    Zombie(const std::string& zombieName);
    ~Zombie();

	void announce (void);
    void display() const;

    std::string getName() const;

    void setName(const std::string& zombieName);
};

Zombie* zombieHorde(int n, std::string name);

#endif