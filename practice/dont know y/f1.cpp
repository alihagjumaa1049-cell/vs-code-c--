#include <iostream>
int main()
{
    int nums[] = {100, 200, 300, 400, 500, 600};
    int nums_Size = sizeof(nums) / sizeof(nums[0]);

    int i = 0;
    for (;;)
    {
        std::cout << nums[i] << "\n";
        i++;
        if (i = nums_Size)
        {
            break;
        }
        else
        {
            continue;
        }
    }

    return 0;
}