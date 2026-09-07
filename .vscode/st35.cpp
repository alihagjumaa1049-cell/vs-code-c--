#include <iostream>
int main()
{
    int i = 1;
    int sum = 0;
    int number = 0;
    while (i > 0)
    {
        std::cout << "Enter an even or positive number : \n";
        std::cout<<"If you want to stop enter 0 . \n";
        std::cin >> number;
        if (number > 0 && number % 2 == 0)
        {
            sum += number;
        }
        else if (number == 0)
        {
            break;
        }
        else
        {
            continue;
        }

    }
    std::cout << sum << "\n";

    return 0;
}