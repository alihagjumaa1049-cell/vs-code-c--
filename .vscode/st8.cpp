#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int age = 300;
    cout << sizeof(age) << "\n"; // 4 Bytes

    short int new_age = 300;
    cout << sizeof(new_age) << "\n"; // 2 Bytes

    long int last_age = 300;
    cout << sizeof(last_age) << "\n"; // 4 Bytes

    cout << sizeof(short) << "\n";         // 2 Bytes
    cout << sizeof(short int) << "\n";     // 2 Bytes
    cout << sizeof(long int) << "\n";      // 4 Bytes
    cout << sizeof(long) << "\n";          // 4 Bytes
    cout << sizeof(long long int) << "\n"; // 8 Bytes
    cout << sizeof(long long) << "\n";     // 8 Bytes
    int num_one = 100;
    cout << sizeof(num_one) << "\n";

    signed int num_two = 100;
    cout << sizeof(num_two) << "\n";

    unsigned int num_three = 100;
    cout << sizeof(num_three) << "\n";

    unsigned int num_four = -10;
    cout << num_four << "\n";

    // using bignum = long long int ;

    typedef long long bignum;

    bignum my_number = 100010001000;
    cout << my_number << "\n";

    cout << my_number << "\n";

    return 0;
}