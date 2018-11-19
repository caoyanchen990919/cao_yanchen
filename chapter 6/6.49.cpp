#include <iostream>
using namespace std;

double a = 3.14159;
inline double circleArea( double r )
{
   return a * r * r;
}
int main()
{
   double r;
   cout << "Enter the r: ";
   cin >> r;
   cout << "The area of the circle is " << circleArea( r ) << endl;
}
