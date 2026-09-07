#include <iostream>
using namespace std;

void without_value()
{
   // nothing to return
}

int main()
{

   bool is_open = true;
   cout << is_open + 10 << "\n";
   cout << true + true + false << "\n";
   bool test_one = 10 > 5;
   bool test_two = 10 > 100;
   cout << test_one << "\n";
   cout << test_two << "\n";
   int num = 1;
   cout << sizeof(test_one) << "\n"; // 1
   cout << sizeof(num) << "\n";      // 4
   bool num_one = 100;               // 1
   bool num_two = -100;              // 1
   bool num_three = 0;               // 0
   cout << num_one << "\n";
   cout << num_two << "\n";
   cout << num_three << "\n";
   return 0;
}