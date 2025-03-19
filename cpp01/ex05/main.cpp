#include "Harl.hpp"

int main() {
    Harl h;

	std::cout << "-------------------------------" << std::endl;
    std::cout << "Testing with debug:" << std::endl;
    h.complain("debug");

	std::cout << "-------------------------------" << std::endl;
    std::cout << "\nTesting with info:" << std::endl;
    h.complain("info");

	std::cout << "-------------------------------" << std::endl;
    std::cout << "\nTesting with warning:" << std::endl;
    h.complain("warning");

	std::cout << "-------------------------------" << std::endl;
    std::cout << "\nTesting with error:" << std::endl;
    h.complain("error");
	
	std::cout << "-------------------------------" << std::endl;
    return 0;
}