#include <iostream>
using namespace std;

int main()
{
    cout << "====================\n";
    int a;
    double b = 20.5;
    a = b;
    cout << a << "\n";
    cout << sizeof(a) << "\n";
    cout << "====================\n";

    cout << "====================\n";
    char c = 'C';
    int d = 20;
    cout << int(c) << "\n";
    cout << c + d << "\n";
    cout << "====================\n";

    cout << "====================\n";
    int e = 20;
    double f = 20.5;
    cout << e + f << "\n"; // 20.5 + 20
    cout << sizeof(e + f) << "\n";
    cout << "====================\n";

    cout << "====================\n";
    int g = 20;
    double h = 20.5;
    cout << g + (int)h << "\n"; // 20 + 20 = 40
    cout << g + int(h) << "\n";
    cout << sizeof(g + (int)h) << "\n";
    cout << sizeof(g + int(h)) << "\n";
    cout << "====================\n";

    cout << "====================\n";

    cout << "====================\n";
    return 0;
}