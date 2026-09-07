#include <iostream>
int main()
{
    int age = 10;
    int points = 400;
    int rank = 4;
    if (age >= 18)
    {
        std::cout << " your welcome your age is ok\n";
    }
    else if (points > 500)
    {
        std::cout << "Welcome your points is ok\n";
    }
    else if (rank > 5)
    {
        std::cout << "Welcome your rank is ok\n";
    }
    else
    {
        std::cout << " Im sorry gg bro \n";
    }

    return 0;
}