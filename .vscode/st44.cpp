#include <iostream>
#include <algorithm>
int main()
{
    int nums[] = {10, 20, 10, 10, 13, 15, 100, 20};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int counter = 0;

    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] == 10)
        {
            counter++;
        }
    }
    std::cout << counter << "\n";
    return 0;
}