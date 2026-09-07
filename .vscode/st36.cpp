#include <iostream>
void details(std::string msg = "Welcome", std::string name = "unknown")
{
    std::cout << msg << " " << name << "\n";
}

int main()
{
    details("hello", "Ali");
    details("hi");
    details();
    return 0;
}