#include <iostream>
int main()
{
    int sequences[3][5] = {{1, 5, 10, 16, 23},
                           {2, 4, 8, 16, 32},
                           {1, 1, 2, 3, 5}};
    int point = 0;

    int answer[3] = {0, 0, 0};

    std::cout << "sequence 1 : \n";
    std::cout << "1 | 5 | 10 | 16 | ?? \n";
    std::cin >>answer[0];

    std::cout << "sequenc 2 : \n";
    std::cout << "2 | 4 | 8 | 16 | ?? \n";
    std::cin >>answer[1];

    std::cout << "sequenc 3 : \n";
    std::cout << "1 | 1 | 2 | 3 |  ?? \n";
    std::cin >>answer[2];

    if (answer[0] == sequences[0][4])
    {
        point++;
    }
    if (answer[1] == sequences[1][4])
    {
        point++;
    }
    if (answer[2] == sequences[2][4])
    {
        point++;
    }
    std::cout << "Your points is : " << point << "\n";
    return 0;
}