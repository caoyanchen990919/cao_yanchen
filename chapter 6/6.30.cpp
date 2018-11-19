#include <iostream>

using namespace std;
int a( int );
int main()
{
   int number;
   cout << "Enter a number between 1 and 9999: ";
   cin >> number;
   cout << "The new number is: ";
   cout << a( number ) << endl;
}
int a( int n )
{
   int b = 0;
   while ( n > 0 )
   {
      b *= 10;
      b += n % 10;
      n /= 10;
   }
   return b;
}
