#include <iostream>
#include <cmath>

using namespace std;
double hypotenuse(double,double);

int main()
{
    double a =0.000;
    double b=0.000;
    cout<<"Enter first number:";
    cin>>a;
    cout<<"Enter second number:";
    cin>>b;
    cout<<"The third number is:"<<hypotenuse( a, b)<<endl;

}
double hypotenuse( double d,double e)
{
    double c=0.00;
    c=(d*d)+(e*e);
    return c;

}

