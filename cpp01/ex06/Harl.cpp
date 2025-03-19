#include "Harl.hpp"

void Harl::debug() {
	std::cout << std::endl;
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "I love having extra bacon for my burger." << std::endl;
	std::cout << std::endl;
	std::cout << "[INFO]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money." << std::endl;
	std::cout << std::endl;
	std::cout << "[WARNING]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << std::endl;
	std::cout << "[ERROR]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}

void Harl::info() {
	std::cout << std::endl;
	std::cout << "[INFO]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money." << std::endl;
	std::cout << std::endl;
	std::cout << "[WARNING]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << std::endl;
	std::cout << "[ERROR]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}

void Harl::warning() {
	std::cout << std::endl;
	std::cout << "[WARNING]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << std::endl;
	std::cout << "[ERROR]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}

void Harl::error() {
	std::cout << std::endl;
	std::cout << "[ERROR]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}

Harl::Harl() {
	complaints[0] = &Harl::debug;
	complaints[1] = &Harl::info;
	complaints[2] = &Harl::warning;
	complaints[3] = &Harl::error;
}

void Harl::complain(const std::string& level) {
	int	i;
	std::string levels[4] = {"debug", "info", "warning", "error"};

	for (i = 0; i < 4; ++i) {
		if (level == levels[i]) {
			break;
		}
	}
	switch (i)
	{
		case 0:
			(this->*complaints[0])();
			break;
		case 1:
			(this->*complaints[1])();
			break;
		case 2:
			(this->*complaints[2])();
			break;
		case 3:
			(this->*complaints[3])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}