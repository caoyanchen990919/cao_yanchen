#include <iostream>
using namespace std;

int main()
{
   int number;
   int a = 1;

   cout << "Enter a positive Integer: ";
   cin >> number;

   cout << number << "! is ";

   while ( number > 0 )
   {
      a *= number;
      number--;
   }

   cout << a << endl;
}
