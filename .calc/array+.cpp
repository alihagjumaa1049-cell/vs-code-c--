#include <iostream>
int main()
{
    for (int i = 1; i <= 4; i++)
    {
        if (i == 2)
        {
            continue;
        }
        std::cout << i << "-";
    }
    std::cout << "\b";

    return 0;
}