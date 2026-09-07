#include <iostream>
int main()
{
    int index = 4;
    while (index < 6)
    {
        std::cout << index << "\n";
        index++;
    }
std::cout<<"\n============\n";
    do
    {
        std::cout << index << "\n";
        index++;

    } while (index < 6);

        return 0;
}