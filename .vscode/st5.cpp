#include <iostream>
using namespace std;
int main()
{
    int num = 10;
    num = 20.5;
    cout << sizeof(num) << endl;
    cout << num << endl;

    double dob = 10;
    dob = 20.5;
    cout << sizeof(dob) << endl;
    cout << dob << endl;

    float fl = 10.5f + 9.5f;
    cout << sizeof(fl) << endl;
    cout << fl << endl;

    auto mix = 10;
    cout << sizeof(mix) << endl;
    return 0;
}