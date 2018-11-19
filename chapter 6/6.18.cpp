#include <iostream>

using namespace std;
int integerPower( int ,int );

int main()
{
    int base;
    int exponent;
    cout<<"Enter the base number:";
    cin>>base;
    cout<<"Enter the exponent:";
    cin>>exponent;
    cout << base << " to the power " << exponent << " is: "
      << integerPower( base, exponent ) << endl;

}
int integerPower(int b,int exp)
{
    int a=1;
   for ( int i = 1; i <=exp; i++ )
     a*=b;
     return a;
}
