#include <iostream>
using namespace std;

int main()
{
   int number;
   int value;
   int smallest;

   cout << "Enter the number of integers to be processed :";
   cin>>number;
   cout << "followed by the integers: ";
   cin >>smallest;

   for ( int i = 2; i <= number; i++ )
   {
      cout<<"Enter the number :";
      cin >> value;
      if ( value < smallest )
         smallest = value;
   }
   cout << "\nThe smallest integer is: " << smallest << endl;
}
