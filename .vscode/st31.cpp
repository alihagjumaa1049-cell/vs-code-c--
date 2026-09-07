#include <iostream>
int main()
{
    std::string products[] = {"Item 1", "Item 2", "Item 3"};
    std::string sizes[] = {"small", "large", "X_large"};
    for (int i = 0; i < sizeof(products) / sizeof(products[0]); i++)
    {
        std::cout << products[i] << "\n";
        std::cout << " sizes : ";
        for (int j = 0; j < sizeof(sizes) / sizeof(sizes[0]); j++)
        {
            std::cout << sizes[j];
            if (j < 2)
            {
                std::cout << " , ";
            }
        }
        std::cout << "\n========\n";
    }
    return 0;
}