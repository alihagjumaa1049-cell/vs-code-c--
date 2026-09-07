#include <iostream>

int CalculateSquare(int num)
{
    int sq=num*num;
    return sq;
}
int main()
{
    int num;
    std::cout << "Enter a number to get it squared :\n";
    std::cin >> num;
    std::cout << "The square of " << num << " is equal to : " << CalculateSquare(num) << "\n";
    return 0;
}