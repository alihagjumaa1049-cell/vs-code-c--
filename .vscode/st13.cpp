#include <iostream>
int main()
{
    int age = 25;
    if (age >= 18)
    {
        std::cout << "Welcome your age is granted\n";
    }
    else
    {
        std::cout << "your age is not granted\n";
    }
    std::string msg = age >= 18 ? "your age is granted" : "your age is not granted\n";
    std ::cout << msg;
    return 0;
}