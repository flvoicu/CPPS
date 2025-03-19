#include "Harl.hpp"

void Harl::debug() {
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "I love having extra bacon for my burger." << std::endl;
}

void Harl::info() {
	std::cout << "[INFO]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money." << std::endl;
}

void Harl::warning() {
	std::cout << "[WARNING]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
}

void Harl::error() {
	std::cout << "[ERROR]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

Harl::Harl() {
	complaints[0] = &Harl::debug;
	complaints[1] = &Harl::info;
	complaints[2] = &Harl::warning;
	complaints[3] = &Harl::error;
}

void Harl::complain(const std::string& level) {
	std::string levels[4] = {"debug", "info", "warning", "error"};
	
	for (int i = 0; i < 4; ++i) {
		if (level == levels[i]) {
				(this->*complaints[i])();
			return;
		}
	}
	std::cout << "Unknown complaint level." << std::endl;
}