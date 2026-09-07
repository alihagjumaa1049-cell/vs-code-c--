#include <iostream>
int main()
{
    double The_Number = 23;
    double number = 0;
    int counter = 1;
    std::cout << "Welcome to the game of guessing the right number 'w'\n";
    std::cout << " Please a number from 1 to 50 \n";
    std::cin >> number;
    while (number != The_Number)
    {
        if (number > The_Number)
        {
            std::cout << number << "is bigger than the correct number\n";
        }
        else if (number < The_Number)
        {
            std::cout << number << " is lesser than the correct number \n";
        }
        std::cout << "Please reenter the number again \n";
        std::cin >> number;
        counter++;
    }
    std::cout << "yeaaaaah you have guessed the number correctly\n";
    if (counter < 4)
    {
        std::cout << "you have a good luck and your tries \n"
                  << counter << "\n";
    }
    else if (counter >= 4 && counter < 7)
    {
        std::cout << "not a bad luck -_- cuz your tries \n"
                  << counter << "\n";
    }
    else if (counter >= 7)
    {
        std::cout << " well it seems that its not a good luck for that time you konw cuz your tries \n"
                  << counter << "\n";
    }

    return 0;
}