#include <iostream>
using namespace std;
long power( long, long );
int main()
{
   long base;
   long exponent;
   cout << "Enter a base :";
   cin >> base ;
   cout <<"Enter an exponent :";
   cin >> exponent;
   cout << base << " raised to the " << exponent << " is " << power( base, exponent ) << endl;
}
long power( long base, long exponent )
{
   if ( exponent == 1 )
      return base;
   else
      return base * power( base, exponent - 1 );
}
