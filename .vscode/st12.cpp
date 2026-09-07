#include <iostream>
int main()
{
    int age = 25;
    int points = 1500;
    if (age >= 18)
    {
        std::cout << "Welcome your age is granted\n";
        if (points > 1000)
        {
            std::cout << "You are VIP\n";
        }
    }

    return 0;
}