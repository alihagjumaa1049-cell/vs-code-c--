#include <iostream>
#include <array>
int main()
{
    std::array<int, 4> M{100, 200, 300, 400};
    std::cout << M[0] << "\n";
    std::cout << M.front() << "\n";
    std::cout << M.back() << "\n";
    std::cout << M.at(2) << "\n";
    std::cout << M.empty() << "\n";
    M.fill(0);
    for (int i = 0; i < 4; i++)
    {
        std::cout << M[i]<<"  ";
    }

    return 0;
}