#include <iostream>
int main()
{
    std::cout << "I am dragon\n";
    std::cout << "I am\n\0 dragon\n";

    char name_a[] = {"Ali1049"};
    std::cout << name_a << "\n";
    std::cout << sizeof(name_a) << "\n";
    std::cout << name_a[0] << "\n";
    std::cout << name_a[6] << "\n";
    std::cout << int(name_a[7]) << "\n";
    std::cout << int(' ') << "\n";

    char name_b[] = {'A', 'l', 'i', 1, 0, 4, 9};
    std::cout << name_b << "\n";
    std::cout << sizeof(name_b) << "\n";
    std::cout << name_b[0] << "\n";
    std::cout << name_b[6] << "\n";
    std::cout << int(name_b[7]) << "\n";
    
    std::string name_c[] = {"Ali1049"};
    std::cout << name_c << "\n";
    std::cout << sizeof(name_c) << "\n";
    std::cout << name_c[0] << "\n";
    std::cout << name_c[6] << "\n";
    return 0;
}