#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
double distance( double, double, double, double );
int main()
{
   double a;
   double b;
   double c;
   double d;
   cout << "Enter the first point(x): ";
   cin >>  a;
   cout << "Enter the first point(y): ";
   cin >>  b;
   cout << "Enter the second point(x): ";
   cin  >> c;
   cout << "Enter the second point(y): ";
   cin >>  d;
   cout << fixed << "Distance between (" << setprecision( 1 ) <<a
      << ", " << b << ") and (" << c << ", " << d << ") is "
      << distance( a, b, c, d ) << endl;
}
double distance( double a1, double b1, double a2, double b2 )
{
   return sqrt( pow( a1 - a2, 2 ) + pow( b1 - b2, 2 ) );
}
