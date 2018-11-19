#include <iostream>
using namespace std;

int main()
{
    double b=0;
    double a=0;
    double c=0;
    cout<<"Enter first number:"<<endl;
    cin>>a;
    cout<<"Enter second number:"<<endl;
    cin>>b;
    cout<<"Enter third number:"<<endl;
    cin>>c;
    a=max(a,b);
    a=max(a,c);
    cout<<"The largest number is :"<<a<<endl;
    return 0.000;
}
