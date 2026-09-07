#include <iostream>
int main()
{
    int num = 0;

    std::cout << num << "\n";
    num++;
    std::cout << num << "\n";
    num++;
    std::cout << num << "\n";
    num++;
    std::cout << num << "\n";
    num++;
    std::cout << num << "\n";
    num++;
    std::cout << num << "\n\n\n\n";

    for (int i = 0; i < 6; i++)
    {
        std::cout << i << "\n";
    }

    int nums[4]{100, 200, 300, 400};

    for (int i = 0; i < 4; i++)
    {
        std::cout << nums[i] << "\n";
    }
    
    return 0;
}