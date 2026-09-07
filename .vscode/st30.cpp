#include <iostream>
int main()
{
    int nums[] = {100, 200, 300, 400, 500, 600, 700};
    int nums_Size = sizeof(nums) / sizeof(nums[0]);

    for (int i = 0; i < nums_Size; i++)
    {
        if (i == 0 || i == 2 || i == 4)
        {
            std::cout << nums[i] << "\n";
        }
        else
        {
            continue;
        }
    }

    std::cout << "=================\n\n\n\n\n";
    for (int i = nums_Size - 2; i > 1; i--)
    {
        std::cout << nums[i] << "\n";
    }

    return 0;
}