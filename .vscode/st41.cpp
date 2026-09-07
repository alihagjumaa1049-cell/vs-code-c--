#include <iostream>
#include <cctype>
int main()
{
    std::cout << "A\n";
    std::cout << tolower('A') << "\n";
    std::cout << char(tolower('A')) << "\n";
    std::cout << char(97) << "\n";
    std::cout << "\n===============\n";
    return 0;
}