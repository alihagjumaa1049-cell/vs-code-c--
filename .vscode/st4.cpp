#include <iostream>
using namespace std;

int main()
{
    cout << "====================\n";
    cout << " Enter your age \n";
    cout << "====================\n";
    int age;
    cin >> age;
    cout << age;
    int age_in_days = age * 365;
    int age_in_hours = age_in_days * 24;
    int age_in_seconds = age_in_hours * 3600;
    cout << "age in days :    " << age_in_days << "\n";
    cout << "age_in_hours :   " << age_in_hours << "\n";
    cout << "age_in_seconds :   " << age_in_seconds << "\n";
    return 0;
}