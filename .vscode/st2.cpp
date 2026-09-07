#include <iostream>
using namespace std;
int a = 100;

int b = 200;

int second()
{
    cout << a << " Comming from second function \n";
    cout << b << " Comming from second function \n";
    return 0;
}

int main()
{
    cout << a << " Comming from main function \n";
    cout << b << " Comming from main function \n";
    second();
    return 0;
}