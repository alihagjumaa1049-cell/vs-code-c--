#include <iostream>
#include <array>

int main()
{
    std::array<double , 5ULL> Matrix ={0, 0, 0, 0, 0};

    for (int i = 0; i < 5; i++)
    {
        std::cin>>Matrix [i];
    }
    for (int i = 0; i < 5; i++)
    {
        std::cout<<Matrix [i]<<"\n";
    }
    Matrix.fill(false);
    
    for (int i = 0; i < 5; i++)
    {
        std::cout<<Matrix [i]<<"\n";
    }
    return 0;
}