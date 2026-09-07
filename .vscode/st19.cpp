#include <iostream>
int main()
{
    int nums[]{100, 200, 300};
    std::cout << "First element : " << nums[0] << "\n";
    std::cout << "Last element : " << nums[2] << "\n";

    std::cout << "location : " << &nums[0] << "\n";
    std::cout << "location : " << &nums[1] << "\n";
    std::cout << "location : " << &nums[2] << "\n";
    
    return 0;
}