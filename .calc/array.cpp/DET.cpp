#include <iostream>
using namespace std;
double Determenenit ( double Matrix [3][3] )
{
    int i = 0 ;
    double DET ;
    double sum = 0 ;
    int I ;
    while ( i < 3 )
{
    if ( i == 0 )
    I = 1 ;
    else if ( i == 1 )
    I = 2 ;
    else if ( i  == 2 )
    I = 0 ;
    if ( I +1 == 3 )
    I = 0 ;
    DET = Matrix [0][i] * ( Matrix [1][I] * Matrix [2][I+1] - Matrix [1][I+1] * Matrix [2][I] );
    sum += DET ;
    i++ ;
}
return sum ; 
}
int main ()
{
    double array [3][3]=
    {{0 , 0 , 0},
     {0 , 0 , 0},
     {0 , 0 , 0}} ;
    for ( int column = 0 ; column < 3 ; column++ )
    {
        for ( int row = 0 ; row < 3 ; row++ )
            {
                cout << " Enter the number that its row : "<<row<<"\n"<<" and its column : "<<column<<"\n";
                cin >> array [row][column] ;
            }
    }
    cout << " the Matrix is equal to \n";
    for ( int column = 0 ; column < 3 ; column++ )
    {
        cout << "{" ;
    for ( int row = 0 ; row < 3 ; row++ )
    {
        cout  <<" "<<array[row][column]<<" ";
    }
    cout <<"}\n";
    }
    cout << " the Determenenit of the Matrix is equal to : \n";
    cout << Determenenit ( array ) << "\n"; 
    return 0;
}