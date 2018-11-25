#include <iostream>
using namespace std;

int main()
{
   const int b = 20;
   int a[ b ] = {};
   int subscript = 0;
   int duplicate;
   int value;
   cout << "Enter 20 integers between 10 and 100: ";
   for ( int i = 0; i < b; )
   {
      duplicate = 0;
      cin >> value;
      if ( value >= 10 && value <= 100 )
      {
         for ( int j = 0; j < subscript; j++ )
         {
            if ( value == a[ j ] )
            {
               duplicate = 1;
               break;
            }
         }
         if ( !duplicate )
         {
            a[ subscript++ ] = value;
            ++i;
         }
         else
            cout << "Duplicate number.\n";
      }
      else
         cout << "Invalid number.\n";
   }

   cout << "\nThe non duplicate values are:\n";
   for ( int i = 0; i < b; i++ )
      cout << a[ i ] << ' ';

   cout << endl;
}
