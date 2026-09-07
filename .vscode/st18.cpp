#include <iostream>
int main()
{
    int nums[4] = {100, 200, 300, 400};
    std::cout << sizeof(int) << "\n";  // 4 Bytes
    std::cout << sizeof(nums) << "\n"; // 16 Bytes

    double dos[4] = {100, 200, 300, 400};
    std::cout << sizeof(double) << "\n"; // 8 Bytes
    std::cout << sizeof(dos) << "\n";    // 32 Bytes

    int rands[]{100, 5000, 950};

    return 0;
}