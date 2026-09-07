#include <iostream>
void print(int a, int b)
{
    std::cout << "Number one is : " << a << "\n";
    std::cout << "Number two is : " << b << "\n";
}
void print(int a, int b, int c)
{
    std::cout << "Number one is : " << a << "\n";
    std::cout << "Number two is : " << b << "\n";
    std::cout << "Number two is : " << c << "\n";
}
void print(std::string a, std::string b)
{
    std::cout << "Number one is : " << a << "\n";
    std::cout << "Number two is : " << b << "\n";
}

int main()
{
    print(10, 20);
    print(10, 20, 30);
    print("ALi", "1049");
    return 0;
}