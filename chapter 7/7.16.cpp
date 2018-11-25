#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
   const long a = 36000;
   const int b = 13;
   int expected[ b ] = { 0, 0, 1, 2, 3, 4, 5, 6, 5, 4, 3, 2, 1 };
   int x;
   int y;
   int sum[ b ] = {};
   srand( time( 0 ) );
   for ( long i = 1; i <= a; i++ )
   {
      x = 1 + rand() % 6;
      y = 1 + rand() % 6;
      sum[ x + y ]++;
   }
   cout << setw( 10 ) << "Sum" << setw( 10 ) << "Total" << setw( 10 )
      << "Expected" << setw( 10 ) << "Actual\n" << fixed << showpoint;
   for ( int j = 2; j < b; j++ )
      cout << setw( 10 ) << j << setw( 10 ) << sum[ j ]
         << setprecision( 3 ) << setw( 9 )
         << 100.0 * expected[ j ] / 36 << "%" << setprecision( 3 )
         << setw( 9 ) << 100.0 * sum[ j ] / a << "%\n";
}
