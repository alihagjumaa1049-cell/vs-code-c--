#include <iostream>
#include <array>
void calc(int nums[], int count)
{
    int result = 0;
    for (int i = 0; i < count; i++)
    {
        result += nums[i];
    }
    std::cout << "result is : " << result << "\n";
}

int main()
{
    int number[] = {10, 20, 30, 40, 100};
    int nums_Size = sizeof(number) / sizeof(number[0]);
    calc(number, nums_Size);
    return 0;
}