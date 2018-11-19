#include <iostream>
using namespace std;

int main()
{
   int counter = 1;
   int accuracy;
   int a = 1;
   double e = 1.0;

   cout << "Enter desired accuracy of e: ";
   cin >> accuracy;


   while ( counter < accuracy )
   {
      a *= counter;
      e += 1.0 / a;
      counter++;
   }

   cout << "e is " << e << endl;
}
