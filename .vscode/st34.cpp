#include <iostream>
int main()
{
    int nums[] = {10, 20, 30, 20, 50};
    for (int i = 0; i < sizeof(nums) / sizeof(nums[0]); i++)
    {
        // if (nums[i] == 20)
        // {
        //     continue;
        // }
        // std::cout << nums[i] << "\n";
        // std::cout << "After\n";
        if (nums[i] == 10)
        {
            std::cout << nums[i] << "\n";
            break;
        }
    }
    return 0;
}