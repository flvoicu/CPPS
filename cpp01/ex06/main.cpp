#include "Harl.hpp"

void toLowerCase(std::string& st)
{
	for (std::string::size_type i = 0; i < st.length(); ++i) {
        st[i] = std::tolower(st[i]);
    }
}

int main(int ac, char *av[]) {
    Harl h;
	std::string lvl;

	if (ac != 2)
	{
		std::cout << "|| Error || Invalid number of arguments" << std::endl;
		return 1;
	}
	lvl = av[1];
	toLowerCase(lvl);
    h.complain(lvl);
    return 0;
}