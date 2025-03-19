#include <iostream>
#include <string>
#include <cctype>

int main(int argc, char* argv[]) {
    std::string concatenatedArgs;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}

    for (int i = 1; i < argc; ++i)
	{
		concatenatedArgs += argv[i];
    }

    for (std::string::size_type i = 0; i < concatenatedArgs.length(); ++i) {
        concatenatedArgs[i] = std::toupper(concatenatedArgs[i]);
    }

    std::cout << concatenatedArgs << std::endl;

    return 0;
}