#include <iostream>
int main()
{
    int number = 0;
    std::cout << "Enter a number :\n";
    std::cin >> number;
    std::cout << number << "\n";
    if (number % 2 == 1)
    {
        std::cout << "The number is odd .\n";
    }
    else
    {
        std::cout << "The number is even .\n";
    }
    return 0;
}