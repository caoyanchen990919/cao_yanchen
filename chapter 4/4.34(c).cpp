#include <iostream>
using namespace std;

int main()
{
   int counter = 1;
   int accuracy;
   int a = 1;
   double e = 1.0;
   double x = 1.0;

   cout << "Enter x: ";
   cin >> x;

   cout << "Enter desired accuracy of e: ";
   cin >> accuracy;

   while ( counter < accuracy )
   {
      x *= x;
      a *= counter;
      e += x / a;
      counter++;
   }

   cout << "e to the " << x << " is " << e << endl;
}
