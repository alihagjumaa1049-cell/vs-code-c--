#include <iostream>
int main()
{
    int i = 0;
    while (i < 5)
    {
        std::cout << i << "\n";
        
        if ( i == 2)
        {
            break;
        }
        i++;
    }
    return 0;
}