#include <iostream>

int calc(int n1, int n2)
{
    return n1 + n2;
}

int main()
{
    int b;
    int a;
    std::cin >> a >> b;
    int result = calc(a, b);
    std::cout << result << "\n";
    std::cout << result * 5 << "\n";
    return 0;
}