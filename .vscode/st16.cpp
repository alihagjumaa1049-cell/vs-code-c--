#include <iostream>
int main()
{
    int day = 0;
    std::cout << " choose a day from 1 to 25 \n";
    std::cin >> day;
    if (day == 1)
    {
        std::cout << "open from 8:00 to 14:00\n";
    }

    else if (day == 2)
    {
        std::cout << "open from 10:00 to 16:00\n";
    }

    else if (day == 2)
    {
        std::cout << "open from 12:00 to 18:00\n";
    }
    std::cout <<"closed\n";
    return 0;
}