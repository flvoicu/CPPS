#include "Zombie.hpp"

int testZombieHorde() {
    Zombie* horde = zombieHorde(5, "Walker");
    
    delete[] horde;
    return 0;
}
void runTests() {
	std::cout << "-------------------------------" << std::endl;

    testZombieHorde();
    std::cout << " testZombieHorde passed" << std::endl;
	std::cout << "-------------------------------" << std::endl;
}

int main() {
    runTests();
    return 0;
}