#include <iostream>
#include <vector>
int main()
{
    std::vector<int> nums_1 = {10, 20, 30, 40};
    std::vector<int> nums_2{100, 200, 300, 400};
    std::vector<int> nums_3(4, 50);

    for (int i = 0; i < nums_1.size(); i++)
    {
        std::cout << nums_1.at(i) << "\n";
    }
    for (int i = 0; i < nums_2.size(); i++)
    {
        std::cout << nums_2.at(i) << "\n";
    }
    for (int i = 0; i < nums_3.size(); i++)
    {
        std::cout << nums_3.at(i) << "\n";
    }
    std::cout << "\n=======================\n";

        return 0;
}