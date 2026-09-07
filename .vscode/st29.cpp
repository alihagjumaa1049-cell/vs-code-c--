#include <iostream>
int main()
{
    int nums[] = {100, 200, 300, 400, 500, 600};
    int nums_Count = sizeof(nums) / sizeof(nums[0]);
    int i = 2;
    for (;;)
    {
        i++;
        std::cout << nums[i] << "\n";
        if (i == nums_Count)
        {
            break;
        }
    }
    return 0;
}