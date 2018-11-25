#include <iostream>
using namespace std;

int main()
{
   for ( int count = 1; count <= 10; count++ )
   {
      if ( count != 5 )
         cout << count << " ";
   }
   cout << "\nSkip when count = 5." << endl;
}
