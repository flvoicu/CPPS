#include "Utils.hpp"

void displayString(const std::string& data) {
    std::cout << " ";
    if (data.length() > 10) {
        for (int i = 0; i < 9; ++i) {
            std::cout << data[i];
        }
        std::cout << ".";
    } else {
        std::cout << data;
        for (int i = data.length(); i < 10; ++i) {
            std::cout << " ";
        }
    }
    std::cout << " |";
}

void toUpperCase(std::string& st)
{
	for (std::string::size_type i = 0; i < st.length(); ++i) {
        st[i] = std::toupper(st[i]);
    }
}

std::string getString(std::string field)
{
	std::string data;

	while (1)
	{
		std::cout << field << std::endl;
		std::cout << "- ";
		std::getline(std::cin, data);
		if (!data.empty())
					break;
		std::cout << field << " can't be empty" << std::endl;
	}
	return (data);
}