#include <iostream>
int main()
{
    int nums[6];
    int sum = 0;
    for (int i = 0; i < 6; i++)
    {
        std::cout << "Enter the element count : " << i << "\n";
        std::cin >> nums[i];
    }
    std::cout << "{";
    for (int i = 0; i < 6; i++)
    {
        std::cout << nums[i] << " ";
    }
    std::cout << "\b}";
    int i = 0;
    while (i < 6)
    {
        if (nums[i] > 0 && nums[i] % 2 == 0)
        {
            sum += nums[i];
            i++;
        }
        else
        {
            i++;
            continue;
        }
    }
    std::cout << "\nThe result : " << sum << "\n";
    return 0;
}