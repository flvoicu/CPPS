#include <string>
#include <iostream>

int main () {
	std::string str = "HI THIS IS BRAIN";
	std::string* stringPTR = &str;
	std::string& stringREF = str;

	std::cout << "memory address: " << &str << " " << &stringPTR << " " << &stringREF << std::endl;
	std::cout << "value: " << str << " " << stringPTR << " " << stringREF << std::endl;
}