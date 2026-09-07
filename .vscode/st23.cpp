#include <iostream>
#include <array>
int main()
{
    int points[4] = {1, 2, 3, 4}; // C-style
    std::array<int, 4> Matrix = {1, 2, 3, 4};
    std::cout << Matrix[0] << "\n";

    std::cout << "Element count : \n"
              << Matrix.size();
    Matrix.fill(true);

    std::cout << "Element count :" << Matrix[0] << "\n";
    std::cout << "Element count :" << Matrix[1] << "\n";
    std::cout << "Element count :" << Matrix[2] << "\n";
    std::cout << "Element count :" << Matrix[3] << "\n";
    return 0;
}