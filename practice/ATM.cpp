#include <iostream>

int main()
{
    int choice;
    int secret_Number = 1049;
    int balance = 1500;
    int number = 0;
    std::cout << "Please enter the secret number :\n";
    std::cin >> number;
    int i = 1;
    while (number != secret_Number)
    {
        std::cout << "sorry the number is wrong \nplease reenter the secret number correctly ";
        std::cin >> number;
        if (i == 2)
        {
            std::cout << "Sorry all the number are wrong .";
            break;
        }
        else if (number == secret_Number)
        {
            std::cout << "Welcome\n";
        }
        i++;
    }
    while (choice != 4)
        std::cout << "Enter 1 to \nEnter 2 to \n Enter 3 to \n Enter to 4 to\n";
    {
        switch (choice)
        {
        case '1':
        case '2':
        case '3':
        case '4':
            break;
        }
    }

    return 0;
}