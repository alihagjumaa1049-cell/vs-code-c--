#include <iostream>
int main()
{
    int age = 15;
    int points = 400;
    if (age >= 18)
    {
        std::cout << "ok\n";
    }
    else
    {
        if (points >= 500)
        {
            std::cout << "ok because of points \n";
        }
        else
        {
            std::cout << "No age or points\n";
        }
    }
    std::cout <<( age >=18 ? "ok\n" :"not ok \n");

    return 0;
}