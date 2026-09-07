#include <iostream>
int main()
{
    int rank = 0;
    int points = 0;
    std::cout << "Enter your rank : \n";
    std::cin >> rank;
    std::cout << " Enter your points : \n";
    std::cin >> points;
    std::cout << "your rank : " << rank << "\nand your points : " << points << "\n";
    if (rank > 5 || points > 1200)
    {
        if (rank > 5)
        {
            std::cout << "Welcome yor rank is granted\n";
        }
        else if (points > 2000)
        {
            std::cout << "your welcome because your points are high \n";
        }
    }
    else
    {
        std::cout << "Sorry your not welcome \n";
    }
    return 0;
}