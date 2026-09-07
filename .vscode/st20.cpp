#include <iostream>
int main()
{
    int nums[4] = {0, 0, 0, 0};

    nums[3] = 400; // last element
    nums[2] = 300; // before the last element
    nums[0] = 100; // first element
    nums[1] = 200; // second element

    std::cout << "Element 1 : " << nums[0] << "\n";
    std::cout << "Element 2 : " << nums[1] << "\n";
    std::cout << "Element 3 : " << nums[2] << "\n";
    std::cout << "Element 4 : " << nums[3] << "\n";

    nums[1] = 1000; // second

    std::cout << "Element 2 : " << nums[1] << "\n";

    int anums[] = {100, 200, 300, 400, 500, 600};

    std::cout << "Array Elements count is " << sizeof(anums) / sizeof(anums[0]) << "\n";

    return 0;
}