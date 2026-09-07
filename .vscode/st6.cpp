#include <iostream>
using namespace std;

int main()
{
    char a = 'A';

    cout << sizeof(a) << "\n";

    auto b = 'B';

    cout << sizeof(b) << "\n";

    auto c = " C ";

    cout << sizeof(c) << "\n";

    char d = 'Z';
    cout << int(d) << "\n";

    cout << int('%') << "\n";
    cout << int('(') << "\n";
    cout << int('Z') << "\n";

    cout << char(81) << "\n";

    return 0;
}