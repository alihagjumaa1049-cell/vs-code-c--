#include <iostream>
int main()
{
    double number1 = 0;
    double number2 = 0;
    double number3 = 0;

    std::cout << " Enter a three numbers to compare them : \n";
    std::cin >> number1 >> number2 >> number3;
    std::cout << "The numbers are :\n";
    std::cout << "First number : " << number1;
    std::cout << "\nSecond number : " << number2;
    std::cout << "\nThird number : " << number3 << "\n";

    if (number1 > number2 && number1 > number3)
    {
        if (number2 > number3)
        {
            std::cout << number1 << " " << number2 << " " << number3 << "\n";
        }
        else
        {

            std::cout << number1 << " " << number3 << " " << number2 << "\n";
        }
    }

    else if (number2 > number1 && number1 > number3)
    {
        if (number1 > number3)
        {
            std::cout << number2 << " " << number1 << " " << number3 << "\n";
        }
        else
        {

            std::cout << number2 << " " << number3 << " " << number1 << "\n";
        }
    }

    else if (number3 > number1 && number3 > 3)
    {
        if (number1 > number2)
        {
            std::cout << number3 << " " << number1 << " " << number2 << "\n";
        }
        else
        {

            std::cout << number3 << " " << number2 << " " << number1 << "\n";
        }
    }
    return 0;
}