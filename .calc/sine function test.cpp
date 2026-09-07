#include <iostream>
using namespace std;
int factorial ( int x )
{
    int i=0;
    double p=1;
    while ( i<x )
    {
        p*=x-i;
        i++;
    }
    return p;
}
double power ( double x , int y )
{
    int i=0;
    double p=1;
    while (i<y )
    {
        p*=x;
        i++;
    }
    return p;
}
int main ()
{
    int i=0;
    double result ;
    double num1 ;
    double num2 ;
    double term ;
    double sum=0 ;
    cout <<"enter the number that you want the sine value for :\n";
    cin>>num1;
    while (i<10000)
    {
        term = power (num1,2*i+1)*power (-1,i)/factorial (2*i+1);
        sum +=term;
        result = sum;
        i++;
    }
    cout<<"the value of sin("<<num1<<") is equal to :"<<result<<"\n";
    return 0;
}