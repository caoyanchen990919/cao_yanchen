#include <iostream>

using namespace std;
int iseven(int);
int a=0;
int main()
{

    cout<<"Please enter the amount of numbers : ";
    cin>>a;
    int b;
    int i=0;
    for ( int i = 1; i <= a; i++ )
   {
      cout << "Enter a number: ";
      cin >> b;
      if(iseven(b)==0)
        cout<<b<<" is even number"<<endl;
      else
        cout<<b<<" is odd number"<<endl;
   }

    return 0;


}
int iseven(int b)
{
    return(b%2);
}
