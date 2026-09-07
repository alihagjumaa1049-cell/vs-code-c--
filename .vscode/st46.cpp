#include <iostream>
int add(int num)
{
    if (num == 0)
    {
        return 0;
    }
    std::cout << num << "\n";
    return num + add(num - 1);
}
int main()
{

    std::cout << add(5) << "\n";
    return 0;
}