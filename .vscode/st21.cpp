#include <iostream>
int main()
{
    int pointes_a[3] = {1, 2, 3};
    int pointes_b[3] = {4, 5, 6};
    int pointes_c[3] = {7, 8, 9};

    const int rows = 3;
    const int columns = 3;

    int pointes[rows][columns] = {{1, 2, 3},
                                  {4, 5, 6},
                                  {7, 8, 9}};

    std::cout << pointes[1][2] << "\n";
    std::cout << pointes[2][0] << "\n";
    std::cout << pointes[2][2] << "\n";

    return 0;
}