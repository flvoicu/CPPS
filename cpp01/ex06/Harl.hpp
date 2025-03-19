#include <iostream>
#include <string>

class Harl {
private:
    void debug();
    void info();
    void warning();
    void error();

    typedef void (Harl::*ComplaintFunction)();
	
    ComplaintFunction complaints[4];

public:
    Harl();
	
    void complain(const std::string& level);
};